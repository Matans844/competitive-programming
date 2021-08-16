# competitive-programming
Solutions to problems in the competitive programming course at the Interdisplinary Center (IDC), Herzliya.

## Introduction
This repository contains solutions to problems presented in the competitive programming course, given at the Interdiscplinary Center (IDC), Herzliya.
Solutions are pulled from the course moodle page.

## Motivation
Solutions in moodle are given across many programming langauges. It is annoying to travel across IDEs to try and learn from solutions. 
Thus, providing a concentrated location where solutions can be presented and modified, across programming languages seems helpful. 

## Recommended setup: Microsoft Visal Studio
Microsoft's Visual Studio Community (which is free) provides the capability of running different programming langauges in the same environment.
By initiating a **blank solution project**, you can add to it many independent projects, where each can be used independently, with its own programming language.
Then, to tell Visual Studio which project you want to run, you use the solution explorer to find the project, right click it, and choose "Set as Startup Project"

## Proposed Structure
The repository is not in the suggested structure, or in the structure I use in Visual Studio.
I uploaded it to GitHub using the Visual Studio GitHub extension. I do not know why it didn't copy the entire structure.
Nevertheless, I will describe how I organized this repository in Visual Studio.

### Taxonomy
Problems are organized in a 2-level folder hierarchy::
1. Topic: Each topic, we learn a new subject.
2. Problem location: In this course, problems are presented during a lesson, or during a tournament. In my repository, I added a 3rd option for practice problems.

### Classification
The problem name format is <original-problem-name>_<language-of-solution>.
1. Topic-01_no-prerequisites:
    1.1 lesson
        1.1.1 molecules_c
        1.1.2 molecules_cpp
    1.2. practice
    1.3 tournament
        1.3.1 painterdilemma_cpp
        1.3.2 stones_python
        1.3.3 tacostand_python
2. Topic-02_sorting-and-searching:
    2.1 lesson
        2.1.1 dogwalking_cpp
    2.2 practice
    2.3 tournament
        2.3.1 lemonsort_cpp
        2.3.2 minimumpermutation_cpp
        2.3.3 prisonsort_cpp
3. Topic-03_dynamic-programming
    3.1 lesson
        3.1.1 carspark_cpp
        3.1.2 kabloom_cpp
    3.2 practice
    3.3 tournament
4. Topic-04_math
    4.1 lesson
    4.2 practice
    4.3 tournament
    
## Good luck! 
