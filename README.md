# Memory Safe
A native approach to provide some protections to a memory value in C++.

## Introduction
Back in 2012, the golden age of iOS games, many games were published to the AppStore. Many games are offline and local. It took only 20 minutes to mod one to have unlimited in-game currencies. There was zero protection to critical values, and they were a quick memory search away. The way how it worked was changing the value to locate the memory address. 

A year or so later, more games were better protected because memory search wouldn't work anymore. I couldn't understand the reason beyond. 

## The Solution
My guess is that games did a simple trick to swap values between two different addresses. This would effectively make the memory search useless.

## Demo
![Cheat Engine](https://raw.githubusercontent.com/HenryQuan/MemorySafe/master/img/ce.png)

The demo showcases how `MemorySafe` could protect critical values. Both `safe_value` and `unsafe_value` are set to 10. They will update to 20 and 120 after user input. However, `unsafe_value` could be modified by Cheat Engine. It was set to 2000 by Cheat Engine. `safe_value` on the other hand, could not be found easily which proves my theory.

![Demo showcase](https://raw.githubusercontent.com/HenryQuan/MemorySafe/master/img/demo.png)

## Afterword
This solution is not perfect. `safe_value` can still be found with more advanced techniques. However, it could at least block out many naive attackers like myself. iOS is getting more and more secure, but storing critical unprotected values in memory is not a good idea. I will cover more in my future blog posts.
