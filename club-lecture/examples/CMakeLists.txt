# Exemples de code des livres du club de lecture

# Pour ajouter un nouvel exemple :
# add_executable(nom_exemple source1.cpp source2.cpp ...)
# target_link_libraries(nom_exemple PRIVATE Qt6::Core Qt6::Widgets) # Si Qt est utilisé

message(STATUS "Configuration des exemples du club de lecture")

# Exemple de structure pour un futur exemple :
# if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/exemple1.cpp")
#     add_executable(exemple1 exemple1.cpp)
# endif()