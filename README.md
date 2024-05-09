### Clean C++ Project Structure

## Project Creation

First of all what I like to do is to check the "Place solution and project in the same directory" checkbox, however this depends on the scale of the project and it might not be a good idea to check it for larger projects.

## Folder Structure

I Like to put my Main function in **Source** folder and all the .cpp and .h files in **Source\Private** and **Source\Public** folders respectively.

## Project Properties

After right clicking on the project and selecting Properties we can change the Output Directory and Intermediate Directory. I like to changed mine to:
- Output Directory - ``$(SolutionDir)Binaries\$(Platform)\$(Configuration)\``
- Intermediate Directory - ``$(SolutionDir)Intermediates\$(Platform)\$(Configuration)\``

  
