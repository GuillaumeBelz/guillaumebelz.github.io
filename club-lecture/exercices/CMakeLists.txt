# Exercices pratiques du club de lecture

# Pour ajouter un nouvel exercice :
# add_executable(nom_exercice source1.cpp source2.cpp ...)
# target_link_libraries(nom_exercice PRIVATE Qt6::Core Qt6::Widgets) # Si Qt est utilisé

message(STATUS "Configuration des exercices du club de lecture")

# Exemple de structure pour un futur exercice :
# if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/exercice1.cpp")
#     add_executable(exercice1 exercice1.cpp)
# endif()