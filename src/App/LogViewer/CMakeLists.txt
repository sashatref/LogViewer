set(PROJECT_NAME LogViewer)

project(${PROJECT_NAME})

set(SOURCES
    main.cpp
    settingsinfo.h
    settingsinfo.cpp
)

add_executable(${PROJECT_NAME} WIN32 ${SOURCES}
    MainWindow.h MainWindow.cpp MainWindow.ui)


target_link_libraries(${PROJECT_NAME}
    PRIVATE
        Qt5::Widgets
        HelperLibrary
        PropertyBrowser3
        CustomStylePlugin
)

target_precompile_headers(${PROJECT_NAME} PRIVATE project_pch.h)

install(TARGETS ${PROJECT_NAME} DESTINATION ".")

aviaNames()
makeAI()
deployTr()
