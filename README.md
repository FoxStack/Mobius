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

## Clone

```
git clone https://github.com/Rafcin/Mobius.git
cd Mobius
git checkout main
```

#Setup
This project depends on Firebase for live reading and writing of shapes, and authentication via 0Auth.
To compile this project you will need to follow a few steps. *Note* Compile this on linux based systems,
using windows isn not an option unless you want to configure MinGW to work with this project/firebase.

Install QT
```
https://www.qt.io/download-qt-installer?hsCtaTracking=99d9dd4f-5681-48d2-b096-470725510d34%7C074ddad0-fdef-4e53-8aa8-5e8a876d6ab4
Qt 6.1.2 
```

Install Dependencies (Global)
```
sudo apt-get install libgl1-mesa-dev
```

Next open the project in CLion (Or other IDE of choice) and startup your python venv. If you use CLion this is
automatically handled.

If you don't use Clion, enter the venv folder and run source inside the bin to start using venv.
```
source activate
```
After that you  need to install the protobuf and absl packages for python. If everything is setup this far pip should work and then it will run. Just make
sure you are using venv.

```
pip install absl-py
pip install protobuf
```

In CLION you will also need to remove Firebase tests and set the venv path for the Firebase SDK.
Under Clion > Settings > Cmake you can add the following Cmake params, just make sure to set the right path to env.
```
-DFIREBASE_CPP_BUILD_TESTS=ON -DBUILD_TESTING=off -DFIREBASE_PYTHON_EXECUTABLE="../../Mobius/venv/bin/python"
```
Without this Firebase will not build properly. (I would know I spent hours making it work)

Should you choose to compile it manually without the nice green button that handles it for you, you can run 
cmake and simply add the above parameters.

#Build

Now the best part. Once you have finish the setup, you can purge the cmake-debug and cmake-build folders as they are
useless to you. You can also go to Build > Clean and that also works.

Next under File select Reload Cmake Project and wait for it to finish. After that you should be all clear to build the program.
```
Clion > File > Reload Cmake Project
```
## Tech

- QT - QT Design Studio
- C++ 20
- Tabulate C++ Library
- Firebase
- Protobuf
- OpenSSL