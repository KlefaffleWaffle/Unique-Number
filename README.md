# Unique-Number
Sometimes whether for programming or labels, we need a unique number. This program generates a unique number that you can either copy by hand or copy with a mouse.

# How it works (Theory)
Because numbers are ordered, if the number increases each time the program is called, you will never get the same number twice, (unless you run the program over 3 billion times).

# How it works (Practice)
The program searches for a prenamed, pre existing file. If the file does not exist, it creates the file and adds "0" to it. The program interprets and saves the current number, clears the text file, and adds the original number plus one, in it's place. Finally it displays the number on screen.

# Demonstration
https://github.com/user-attachments/assets/324518e0-0da3-417f-b362-b9e970bd1ae0

# Use case
In my library, "Austins Helper Class" I have a custom debug function that tells you what line the cout statement was called on. Part of the way this function works is that it has a unique identifier in the form of a string parameter. While on small projects, that's relatively easy to manage, on larger projects, especially projects you've taken breaks from, it's easy to forget what codes you've used. Because you can guarantee that every time you run this program, it is a unique number from every other time you've ran it. Therefore, if you just use these numbers, you can always guarantee your identifier is unique.  
