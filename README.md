# AssistentMaker
A cross-platform simple drawing assistant maker for the now-controvertial visual art introduction course *Layman's introduction to art* based on OpenCV and WxWidgets. Currently all written in C++.  

## Binaries

We do not have a nightly build yet, and build for different platforms may be postponed or even dropped due to personal issues, as there's virtually only one person doing the programming work. However, with your contribution, this issue can be solved semi-easily.

## Goal

The primary goal for this project is to provide an easy-to-use and intuitive application for creating grids and guidelines on any reference picture.

We try to keep the application "as minimal as possible" and try not to be a bloatware, so we would not like to shove a chromium browser into such a simple application. Even in its final form, we expect this project to be simple C++ code with a graphic library and a gui library.

Even though the goal is reletively simple, there is some "quirks" of this program that may seem strange, and may not even adhere to the primary goal.  
These quirks, in our consideration is for decresing the number of options availible in an attempt to make the application more user-friendly and not too intimidating.

- this application will only be supporting output of an aspect ratio of 3:2 and 2:3 considering the aspect ratio of a sheet of 8K paper.
- this application will only be supporting grid layout up to 5x5 considering grids denser than that will be too hard to draw out by hand, and training result may suffer due to the density of the grid.
- *more...*

These options may be included in the manner of "advanced options" hiding from the main panel and UI, but these features will not be implemented before the primary goal is achieved.

## Building from source

1. install all prerequisites:
	- build-essentials(for linux users), containing: dpkg-dev fakeroot g++ g++-4.6 libalgorithm-diff-perl libalgorithm-diff-xs-perl libalgorithm-merge-perl libdpkg-perl libstdc++6-4.6-dev libtimedate-perl
	- **cmake**, binaries are availible for Windows, MacOS and GNU/Linux on the [official website](https://cmake.org/install/), apt users can also install by `sudo apt install cmake`.
	- **opencv(for Cpp)**, Windows installers are availible [here on the Github page](https://github.com/opencv/opencv/releases), there are also third-party binaries for [MacOS(homebrew)](https://formulae.brew.sh/formula/opencv) and [Linux package managers](https://pkgs.org/search/?q=opencv). A tutorial for building from source can be found [here](https://docs.opencv.org/4.x/d0/d3d/tutorial_general_install.html).
	- **wxWidgets**, source and Windows installers are on the [wxWidgets download page](https://www.wxwidgets.org/downloads/), there's also a [homebrew package for MacOS](https://formulae.brew.sh/formula/wxwidgets), and [Linux binaries](https://pkgs.org/search/?q=wxwidgets) from corresponding package managers.

2. download this repository:
	- download [here](https://github.com/CaeruleumWang/AssistentMaker/archive/refs/heads/main.zip), or just simply `wget https://github.com/CaeruleumWang/AssistentMaker/archive/refs/heads/main.zip`
	- then, simply unzip it to your preferred destination.

3. start building!
	- `cd` into the unarchived directory, then `cd` to the "build" subdirectory.
	- run `make ..`.
	- (optional) if you need to install the application, do `sudo make install`.
	- the binary or executable can be found inside the "bin" subdirectory.

## Contributors
- **Laymen** - Project starter.
- **Caeruleum** - Programmer, temporary project director.
- **Kdou** - UI designer.

We'll be more than happy to recieve your help, too! Here's what you can do:
- post an issue to this github page
- provide guidance or suggestions to [this email](CaeruleumWang@protonmail.com)
- provide code and bugfixes via github. As the team is extremely small, it'll be preferred to contact [Caeruleum](CaeruleumWang@protonmail.com) before starting to work on anything to prevent us working on the same bug or feature or having different visions for the project.
