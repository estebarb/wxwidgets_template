# TODO: Cambiar el nombre del destino. Este va a ser el nombre del ejecutable
set(TARGET_NAME PlantillaWxWidgets)

project(${TARGET_NAME})

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

######################################## DEPENDENCIAS ########################################

# TODO: Si necesitan algún componente adicional de wxWidgets, agréguenlo a la lista
find_package(wxWidgets REQUIRED COMPONENTS net core base)

if(wxWidgets_USE_FILE)
    include(${wxWidgets_USE_FILE})
endif()

######################################## Configuración del proyecto ########################################

set(SRCS
# TODO: Agregar aquí los archivos fuente de su proyecto
    main.cpp
)

if(APPLE)
    # create bundle on apple compiles
    add_executable(${TARGET_NAME} MACOSX_BUNDLE ${SRCS})

    # Set a custom plist file for the app bundle - needed for Mac OS Retina display
    set_target_properties(${TARGET_NAME} PROPERTIES MACOSX_BUNDLE_INFO_PLIST ${CMAKE_CURRENT_SOURCE_DIR}/Info.plist)
else()
    # the WIN32 is needed for Windows in order for it to look for WinMain
    # instead of the main function. This is ignored on other systems,
    # so it works on all platforms
    add_executable(${TARGET_NAME} WIN32 ${SRCS} main.exe.manifest)
endif()

target_include_directories(${TARGET_NAME} PUBLIC ${INCLUDE_DIR})
target_link_libraries(${TARGET_NAME} ${wxWidgets_LIBRARIES})

# Si quisieran generar otro ejecutable, con otro nombre, simplemente repitan el proceso:
# add_executable(NOMBRE_EJECUTABLE archivo1.cpp archivo2.cpp ...)
# target_include_directories(NOMBRE_EJECUTABLE PUBLIC ${INCLUDE_DIR})
# La siguiente línea solamente la necesitan si usan wxWidgets, sino no la agreguen:
# target_link_libraries(NOMBRE_EJECUTABLE ${wxWidgets_LIBRARIES})