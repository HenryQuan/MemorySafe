# Memory Safe

A naive approach to provide some protections to memory values.

## Introduction

Back in 2012, the golden age of iOS games, many games appeared on AppStore. Many games are offline and local. It took only 20 minutes to mod one to have unlimited in-game currencies. There was zero protection for critical values, and they were a quick memory search away. The way how it worked was by changing the value to locate the memory address.

A year or so later, games were more protected because memory search wouldn't work anymore. I couldn't understand the reason beyond.

## The Solution

My guess is that games did a simple trick to swap values between two different addresses, effectively make the memory search useless.

## Demo

![Cheat Engine](https://raw.githubusercontent.com/HenryQuan/MemorySafe/master/img/ce.png)

The demo showcases how `MemorySafe` could protect critical values. Both `safe_value` and `unsafe_value` are 10 by default. They will update to 20 and 120 after user input. However, `unsafe_value` could be modified by Cheat Engine half way to 2000 in the demo. On the other hand, `safe_value` could not be found easily.

![Demo showcase](https://raw.githubusercontent.com/HenryQuan/MemorySafe/master/img/demo.png)

## Afterword

This solution is not perfect. `safe_value` can still be found with more advanced techniques. However, it could at least block out many naive attackers like myself. iOS is getting more secure, but storing critical unprotected values in memory is not a good idea. I will cover more in my future blog posts.

Also check my post on [Linkedin](https://www.linkedin.com/posts/yihengquan_memorysafe-is-my-naive-approach-providing-activity-7023976841812037632-BS9O?utm_source=share).
