<h1 align="center"> Utext </h1> <br>

<p align="center">
    <a href="https://github.com/yohrudkov/Utag">
        <img alt="Utext"
        title="Utext"
        src="https://github.com/yohrudkov/Utext/blob/main/app/resources/text.svg?raw=true"
        width="250">
    </a>
</p>

<p align="center"> Text editor for C/C++ code. Build with Cmake. </p>

<p align="center">
    <a href="https://github.com/yohrudkov">
        <img alt="yohrudkov GitHub main page"
        title="Main page"
        src="https://github.githubassets.com/images/modules/logos_page/GitHub-Logo.png"
        width="140">
    </a>
</p>

## Table of Contents

- [Introduction](#Introduction)
- [Features](#Features)
- [Build Process](#Build-Process)
    - [Dependencies](#Dependencies)
    - [Preparation](#Preparation)
    - [Compilation](#Compilation)
    - [Initiation](#Initiation)
- [Authors](#Authors)
- [License](#License)
- [Acknowledgments](#Acknowledgments)

## Introduction

Free GUI application that allows you to create, open, and edit text files on your computer.

<p align="center">
    <img alt="Utext"
    title="Utext"
    src="https://github.com/yohrudkov/Utext/blob/main/app/resources/img/example1.jpg?raw=true"
    width="400">
    <img alt="Utext"
    title="Utext"
    src="https://github.com/yohrudkov/Utext/blob/main/app/resources/img/example2.jpg?raw=true"
    width="400">
</p>

## Features

A few of the things you can do with Utext:

* open directories and single files;
* list opened directory files and subdirectories in the Tree area;
* open files from the Tree area for reading/editing in the Text area;
* save files after editing;
* copy/cut/paste options in the Toolbar;
* find and replace options in the Toolbar;
* undo and redo options in the Toolbar;
* keyboard shortcut;
* syntax highlighting for source code;
* regex-based find and replace options;
* autocompletion of the text;
* split view of the Text area for multiple file editing;
* ability to create/delete/rename files or directories from Tree area;
* themes.

## Build Process

### Dependencies

- [CMake](https://cmake.org) - *an open-source, cross-platform family of tools designed to build, test and package software.*
- [Qt](https://www.qt.io) - *a free and open-source widget toolkit for creating graphical user interfaces as well as cross-platform applications that run on various software and hardware platforms.*

### Preparation

For find_package to be successful, CMake must find the Qt installation in one of the following ways:

- Set your CMAKE_PREFIX_PATH environment variable to the Qt 5 installation prefix:
    - uncomment and change CMAKE_PREFIX_PATH path in *`Utext/CMakeLists.txt`* file;
    - or just run *`export CMAKE_PREFIX_PATH=/path_to_qt_directory`* commend in shell.
- Set the Qt5_DIR in the CMake cache to the location of the Qt5Config.cmake file.

### Compilation

To build Utext project, run the following *`./build.sh`* script.

### Initiation

To begin to use Utext project, run the following *`./utext`* exe file.

## Authors

- Yaroslav Ohrudkov - *Application development* - [yohrudkov](https://github.com/yohrudkov)
- Illia Minakov - *Application development* - [	iminakov](https://github.com/i-minakov)

## License

Collision is an open-sourced software licensed under the [MIT license](https://en.wikipedia.org/wiki/MIT_License). \
[Copyright (c) 2020 yohrudkov](https://github.com/yohrudkov/Utext/blob/main/LICENSE).

## Acknowledgments

Thanks [Ucode IT academy](https://ucode.world/ru/) for the training program provided.
