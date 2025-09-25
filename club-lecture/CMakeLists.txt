cmake_minimum_required(VERSION 3.16)

project(ClubLectureNaN VERSION 1.0.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Qt6 components if needed
find_package(Qt6 QUIET COMPONENTS Core Widgets)

# Create a variable to hold all example sources
set(EXAMPLE_SOURCES "")

# Add subdirectories for book examples if they exist
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/examples")
    add_subdirectory(examples)
endif()

# Add subdirectories for exercises if they exist
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/exercices")
    add_subdirectory(exercices)
endif()

# Print information about the project
message(STATUS "Club de Lecture NaN - Configuration terminée")
message(STATUS "Version du projet: ${PROJECT_VERSION}")
message(STATUS "Répertoire des sources: ${CMAKE_CURRENT_SOURCE_DIR}")

if(Qt6_FOUND)
    message(STATUS "Qt6 trouvé - Version: ${Qt6_VERSION}")
else()
    message(STATUS "Qt6 non trouvé - seuls les exemples C++ standard seront disponibles")
endif()