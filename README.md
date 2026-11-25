# 🎯 Number Guessing Game in C

A simple, interactive, and beginner-friendly **Number Guessing Game** developed using the C programming language.

The computer generates a random number between **1 and 100**, and the player has **7 attempts** to guess the correct number.

## 🚀 Features

- 🎲 Random number generation (1–100).
- 🔢 Maximum 7 guessing attempts.
- ⬆️ Hints to guess a larger number.
- ⬇️ Hints to guess a smaller number.
- ⏳ Displays remaining attempts.
- 🚫 Input validation for numbers outside the given range.
- 🏆 Congratulatory message when the correct number is guessed.
- ❌ Displays the correct number if all attempts are exhausted.

## 🛠️ Technologies Used

- **Language:** C
- **Header Files:**
  - `stdio.h` – Input and output operations.
  - `stdlib.h` – Random number generation.
  - `time.h` – Random seed generation.

## 💻 How to Run

### 1. Clone the Repository

```bash
git clone YOUR_REPOSITORY_URL
```

### 2. Navigate to the Project Folder

```bash
cd Number-Guessing-Game
```

### 3. Compile the Program

Using GCC:

```bash
gcc guessing_game.c -o guessing_game
```

### 4. Run the Program

**Windows:**
```bash
guessing_game.exe
```

**Linux / macOS:**
```bash
./guessing_game
```

## 🎮 Sample Output

```text
========================================
          NUMBER GUESSING GAME
========================================

Welcome to the Number Guessing Game!

You have 7 attempts to guess the number.

Enter your guess (1-100): 40

        ↑ Guess a larger number!

Attempts remaining: 6

Enter your guess (1-100): 70

        ↓ Guess a smaller number!

Attempts remaining: 5

Enter your guess (1-100): 55

========================================
          CONGRATULATIONS!
========================================

You guessed the correct number in 3 attempts!

========================================
             GAME OVER
========================================

Developed by Piyush
```

*Note: The sample output is for demonstration purposes. The random number changes every time the program runs.*

## 📚 Concepts Practiced

This project helped me understand and practise:

- Variables and data types.
- Conditional statements (`if-else`).
- `do-while` loop.
- Random number generation (`rand()` and `srand()`).
- Counters and increment operators.
- Input validation.
- `break` and `return` statements.

## 🎯 Learning Outcome

Through this project, I improved my understanding of C programming, logical thinking, conditional statements, loops, and problem-solving.

## 🔮 Future Improvements

- Add difficulty levels (Easy, Medium, Hard).
- Add a replay option.
- Introduce a scoring system.
- Track the player's best score.

## 👨‍💻 Developer

**Piyush**

First-Year B.E. Computer Science Engineering Student

---

⭐
