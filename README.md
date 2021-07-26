# Mobius

## Requirements

To get up and running you'll need some specific workspace tools, most of what you need should be installed or can be installed via this script https://github.com/Rafcin/CS1C/blob/main/tools.sh

- [Git Kraken](https://www.gitkraken.com/ "Git Kraken")
- [Figma](https://www.figma.com/ "Figma")
- [QT Design Studio](https://www.qt.io/blog/qt-design-studio-2.0-released "QT Design Studio")
- [CLion](https://www.jetbrains.com/clion/?gclid=CjwKCAjwieuGBhAsEiwA1Ly_nUPyt8CykMv7iFiZheXmYp3OlAWZf8CTS5MXTNdNzVc2MOTuLwepaRoC0EUQAvD_BwE "CLion") by Jetbrains
  Kraken will make it easier for the team members to track commits and view merges/cherrypick.
  QT Design Studio will help create designs and Figma will be used to prototype designs before they are built.
  CLion is optional, however the project was constructed using CLion. CLion also provides useful tools for rapid development and debugging.

## Setup

```bash
git clone https://github.com/Rafcin/Mobius.git
cd Mobius
git checkout main
```

QT Won't Compile? Missing OpenGL? Install the following package.
```
sudo apt-get install libgl1-mesa-dev
```

CLION Config - Firebase requires python, as a result you need to do the following:
```
pip install absl-py
pip install protobuf
```
This will install absl and protobuf. They are required by the Firebase python compiler.
These packages should be installed in your project under the venv folder that houses Python2.7

In CLION you will also need to remove Firebase tests and set the venv path for the Firebase SDK.
Under Clion > Settings > Cmake you can add the following Cmake params, just make sure to set the right path to env.
```
-DFIREBASE_CPP_BUILD_TESTS=ON -DBUILD_TESTING=off -DFIREBASE_PYTHON_EXECUTABLE="../../Mobius/venv/bin/python"
```
Without this Firebase will not build properly. (I would know I spent hours making it work)

Cmake Debug and Prod builds must be removed when repulling. Then clear cache and build.
It will automatically pull extra firebase libs.
```
Clion > File > Reload Cmake Project
~Run Build
```
## Tech

- QT - QT Design Studio
- C++ 20
- Tabulate C++ Library
- Cinder
- Eigen
