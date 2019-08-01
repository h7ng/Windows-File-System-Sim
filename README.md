# Windows-File-System-Sim

This program is a simulation of Windows file system.

The program has 4 classes: Driver, Container (ABC), File, Folder.

The main part of a file system is a driver, it can include a folder or a file. Inside a folder, there can be another folder or a file while file is the smallest element of the file system.

In other words, the relationship of Driver and Container is "has-a". File and Folder "is-a" Container, they redefine attributes and behaviors of Container.
