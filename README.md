# Strong-Password-Generator
A small project in designing and implementing a password generator. 

The general idea is to create a 16 character password generator that creates random secure passwords from capital letters, lowercase letters, numbers and symbols.
I'm gonna start by simply putting all of these characters into an array or file and writing a simple main to generate a password randomly from the array or file. This could though create issues with too few numbers or letters being used in a password and I'll have to refine the code to fix that. But for now the goal is to make a proof of concept.

Password gen class is done and it makes strong passwords. But I want to write something that would highly desentivise repeating characters. I'd probably do this through a set and making sure each piece of the string is not already in the set and if it is, choose a new character. 

Upon actually writing it out, knowing that the password cannot have repeated characters actually makes it weaker. instead of 71^16 combos it becomes (71 * 70 * 69 * ... * 55) combos. Not a huge deal but I think I'll abandon that line of removing repeats. What would actually be good is a password gen where you can choose to just have letters or just numbers or like a combo of numbers and symbols
