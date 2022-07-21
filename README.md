# AssistentMaker
A cross-platform simple drawing assistant maker for the now-controvertial visual art introduction course *Layman's introduction to art* based on OpenCV and WxWidgets. Currently all written in C++.  

## Info

OS: Windows 7, MacOS, GNU/Linux

We do not have a nightly build yet, and build for different platforms may be postponed due to personal issues, as there's virtually only one person doing the programming work. However, with your contribution, this issue can be solved semi-easily.

## Goal

The primary goal for this project is to provide an easy-to-use and intuitive application for creating grids and guidelines on any reference picture.

We try to keep the application "as minimal as possible" and try not to be a bloatware, so we would not like to shove a chromium browser into such a simple application. Even in its final form, we expect this project to be simple C++ code with a graphic library and a gui library.

Even though the goal is reletively simple, there is some "quirks" of this program that may seem strange, and may not even adhere to the primary goal.  
These quirks, in our consideration is for decresing the number of options availible in an attempt to make the application more user-friendly and not too intimidating.

- this application will only be supporting output of an aspect ratio of 3:2 and 2:3 considering the aspect ratio of a sheet of 8K paper.
- this application will only be supporting grid layout up to 5x5 considering grids denser than that will be too hard to draw out by hand, and training result may suffer due to the density of the grid.
- *more...*

These options may be included in the manner of "advanced options" hiding from the main panel and UI, but these features will not be implemented before the primary goal is achieved.

## Contributors
- Caeruleum - Programmer, temporary project director.
- Kdou - UI designer

We'll be more than happy to recieve your help, too! Here's what you can do:
- post an issue to this github page
- provide guidance or suggestions to [this email](CaeruleumWang@protonmail.com)
- provide code and bugfixes via github. As the team is extremely small, it'll be preferred to contact [Caeruleum](CaeruleumWang@protonmail.com) before starting to work on anything to prevent us working on the same bug or feature or having different visions for the project.
