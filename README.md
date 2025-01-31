# Pong-Game-in-C

## Console Pong Game
Welcome to Console Pong, a simple yet entertaining implementation of the classic Pong game in C! This project was developed as part of an Introduction to Computer Science course, aiming to introduce basic programming concepts through game development.

---

### Instructions:
- Use the **'a'** key to move the paddle to the left.
- Use the **'s'** key to move the paddle to the right.
- Press **'x'** to exit the game.
- Choose the starting position of the ball by selecting the top corner (left or right).
- Select your preferred difficulty level (**Easy**, **Moderate**, or **Hard**).

---

### Features:
- Three levels of difficulty: **Easy**, **Moderate**, and **Hard**.
- Real-time paddle movement based on user input, providing an engaging gaming experience.
- Dynamic ball movement with collision detection against paddles and boundaries, ensuring fair gameplay.
- Option to terminate the game at any point, giving players flexibility.

---

![image](https://github.com/user-attachments/assets/eeb26f01-f2b2-4bdb-b447-f637e390e4c2)
### How to Run:

1. **Clone the repository:**
   First, clone the project to your local machine by running the following command in your terminal:
   ```bash
   git clone https://github.com/yourusername/Pong-Game-in-C.git
   ```

2. **Navigate to the project directory:**
    Change into the project folder where the code is stored.
   - Open a terminal (Ctrl + Shift + `).
   - Navigate to the directory where your C code is saved using the `cd` command:
     ```bash
     cd src
     ```
3. **Compile the code:**
   Use gcc to compile the C source code into an executable. Run this command in your terminal:
     ```bash
     gcc -o pong_game pong_game.c
     ```
     - `gcc` is the C compiler.
     - `-o pong_game` specifies the output file name (the executable).
     - `pong_game.c` is the name of your C source file (make sure to use the correct filename here).
   
3. **Run the Program:**
   - After successful compilation, run the program using:
     ```bash
     ./pong_game
     ```
   
4. **Expand the Terminal Window:**
   - To properly see the whole game frame, expand the terminal window size.

---

### Compatibility:
This program should run on any system with a C compiler installed (such as GCC or Clang).
