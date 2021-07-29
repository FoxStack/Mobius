cmake_minimum_required(VERSION 3.19)
project(Mobius)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_PREFIX_PATH "~/Qt/6.1.2/gcc_64/lib/cmake")
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(QT_VERSION 6)
set(REQUIRED_LIBS Core Gui Widgets)
set(REQUIRED_LIBS_QUALIFIED Qt6::Core Qt6::Gui Qt6::Widgets)

set(TS_FILES Mobius_en_US.ts UUID/UUID.cpp UUID/UUID.h Lib/UUID/UUID.h)

add_executable(${PROJECT_NAME}
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        Shape/Shape.cpp
        Shape/Shape.h
        Shape/Ellipse/Ellipse.cpp
        Shape/Ellipse/Ellipse.h
        Shape/Rectangle/Rectangle.cpp
        Shape/Rectangle/Rectangle.h
        Shape/Line/Line.cpp
        Shape/Line/Line.h
        Shape/Polygon/Polygon.cpp
        Shape/Polygon/Polygon.h
        Shape/Polyline/Polyline.cpp
        Shape/Polyline/Polyline.h
        Shape/Text/Text.cpp
        Shape/Text/Text.h
        RenderArea/RenderArea.cpp
        RenderArea/RenderArea.h
        Vector/Vector.hpp
        Vector/Iterator/iterator.h
        Vector/Iterator/reverse.h
        UI/Login/login.cpp
        UI/Login/login.h
        UI/Login/login.ui
        UI/Contact/contactus.cpp
        UI/Contact/contactus.h
        UI/Contact/contactus.ui
        UI/Testimonial/Add/addtestimonialdialog.cpp
        UI/Testimonial/Add/addtestimonialdialog.h
        UI/Testimonial/Add/addtestimonialdialog.ui
        UI/Testimonial/List/testimoniallistview.cpp
        UI/Testimonial/List/testimoniallistview.h
        UI/Testimonial/List/testimoniallistview.ui
        UI/Testimonial/showtestimonials.ui
        DB/DB.cpp
        DB/DB.h
        Lib/Json/json.hpp
        Lib/UUID/UUID.h
        ${TS_FILES}
)

if (NOT CMAKE_PREFIX_PATH)
    message(WARNING "CMAKE_PREFIX_PATH is not defined, you may need to set it "
            "(-DCMAKE_PREFIX_PATH=\"path/to/Qt/lib/cmake\" or -DCMAKE_PREFIX_PATH=/usr/include/{host}/qt{version}/ on Ubuntu)")
endif ()

find_package(Qt${QT_VERSION} COMPONENTS ${REQUIRED_LIBS} REQUIRED)
target_link_libraries(${PROJECT_NAME} ${REQUIRED_LIBS_QUALIFIED})



