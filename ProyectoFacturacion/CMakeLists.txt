cmake_minimum_required(VERSION 3.19)
project(ProyectoFacturacion LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets Sql)

qt_standard_project_setup()

qt_add_executable(ProyectoFacturacion
    WIN32 MACOSX_BUNDLE
    main.cpp
    menuprincipal.cpp
    menuprincipal.h
    menuprincipal.ui
    registroui.h registroui.cpp registroui.ui
    usuario.h usuario.cpp
    cliente.h cliente.cpp
    Tipos.h
    Tipos.cpp
    producto.h producto.cpp
    database.h database.cpp
    usuariorepo.h usuariorepo.cpp
    manejousuario.h manejousuario.cpp
    productorepo.h productorepo.cpp
    clienterepo.h clienterepo.cpp
)

target_link_libraries(ProyectoFacturacion
    PRIVATE
        Qt::Core
        Qt::Widgets
        Qt::Sql
)

include(GNUInstallDirs)

install(TARGETS ProyectoFacturacion
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET ProyectoFacturacion
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
