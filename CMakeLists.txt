cmake_minimum_required(VERSION 3.19)
project(Mobius)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_PREFIX_PATH "/home/raf/Qt/6.1.2/gcc_64/lib/cmake")
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(QT_VERSION 6)
set(REQUIRED_LIBS Core Gui Widgets)
set(REQUIRED_LIBS_QUALIFIED Qt6::Core Qt6::Gui Qt6::Widgets)

add_executable(${PROJECT_NAME}
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        src/Shape/Shape.cpp
        src/Shape/Shape.h
        src/Shape/Ellipse/Ellipse.cpp
        src/Shape/Ellipse/Ellipse.h
        src/Shape/Rectangle/Rectangle.cpp
        src/Shape/Rectangle/Rectangle.h
        src/Shape/Line/Line.cpp
        src/Shape/Line/Line.h
)

if (NOT CMAKE_PREFIX_PATH)
    message(WARNING "CMAKE_PREFIX_PATH is not defined, you may need to set it "
            "(-DCMAKE_PREFIX_PATH=\"path/to/Qt/lib/cmake\" or -DCMAKE_PREFIX_PATH=/usr/include/{host}/qt{version}/ on Ubuntu)")
endif ()

find_package(Qt${QT_VERSION} COMPONENTS ${REQUIRED_LIBS} REQUIRED)
target_link_libraries(${PROJECT_NAME} ${REQUIRED_LIBS_QUALIFIED})



