# Preface
In our modern world, there's an idea that the more complex the program, the more impressive it is. It seems every new technology needs to have AI or intensive algorithms. Yet on the functional side of things, you don't want complexity. You want minimalism. Complexity means longer compute times, more power usage, longer and harder development cycles as developers have to learn and understand not only their own team's code and how it functions, but all related libraries and dependencies.

Here's a real world example. On [StableDiffusionWeb.com](https://stablediffusionweb.com/photo-effects/ai-polaroid-maker) you can use AI to turn your photo into a polaroid. Now all this website appears to be doing is imitating the square aspect ratio of a polaroid and adding a white background. This can be done with the crop tool on most basic photo editing softwares. I can even do this on the photo editing software on my galaxy phone. One might even ask, is this genuinely AI? Now I've taken the liberty to highlight that it is. See below.

<img width="1900" height="870" alt="Screenshot 2026-06-04 120240" src="https://github.com/user-attachments/assets/21dc20ec-7ebb-49a5-8b08-d2171c9f32ff" />



https://github.com/user-attachments/assets/829e12c9-2901-46ce-a1ad-9c4665beb572



<img width="1900" height="870" alt="Screenshot-2026-06-04-1202402" src="https://github.com/user-attachments/assets/67522dbb-76b8-46f5-9bdd-32539c6a0e8e" />

While cropping just cuts off elements of the photo, Stable Diffusion is adding to the photo, (everything in red). Stable Diffusion is using AI to analyze the photo and expand it. But I would argue most readers wouldn't have noticed that if I hadn't pointed it out. Which begs the question, "If the difference is negligible or worse unnoticeable, why use the more costly feature?" We are currently experiencing massive shortages in RAM and GPUs, not to mention the electricity and power consumption of these components. Not to mention the enviornmental impact. Not to mention the licensing cost of the access to the AI APIs. In programming, simplicity and minimilism matter, while complexity, especially needless complexity should be frowned upon.   

# Unique-Number
Sometimes whether for programming or labels, we need a unique number. This program generates a unique number that you can either copy into your program or whatever else you need. In my library, "Austins Helper Class" I have a custom debug function that tells you what line the cout statement was called on. Part of the way this function works is that it has a unique identifier in the form of a string parameter. While on small projects, that's relatively easy to manage, on larger projects, especially projects you've taken breaks from, it's easy to forget what codes you've used. Because you can guarantee that every time you run this program, you get a unique number from every other time you've ran it, it doesn't matter when the last time you called the program was, or what your use case was.  

# How it works (Theory)
In programming, there are often different ways to tackle the same problem. 
One could use a random number generator, but that requires logging, saving, and checking every number that's ever been generated. That means that the more you run the program, the slower it gets.
One could use a Universally Unique Identifier, or UUID, but that is grossly overkill when the primary function is about generating key identifiers. If for some reason you could not copy and paste, it would be grossly inconveint to copy by hand. On top of that, if one were to modify the code, they would need to understand how the UUID library works. 

My solution is simple. Because numbers are ordered, if you grab numbers in sequence, you will never get the same number twice, (unless you run the program over 3 billion times). We can exploit this mathematical principle to always generate a unique number.

# How it works (Practice)
The program searches for a prenamed, pre existing file. If the file does not exist, it creates the file and adds "0" to it. The program interprets and saves the current number, clears the text file, and adds the original number plus one, in it's place. Finally it displays the number on screen.

# Demonstration
https://github.com/user-attachments/assets/324518e0-0da3-417f-b362-b9e970bd1ae0


