# 🃏 Card Matching Game

## 📝 Project Overview

This project is a card-based game developed using C++ and the Qt framework. It features a variety of cards, each with unique functionalities and scoring mechanisms, providing an engaging and interactive gaming experience. Players interact with different types of cards to gain advantages, such as extra time, revealing hidden cards, or doubling their points.

## 🔑 Key Components

### 🃏 Card Base Class

The **`Card`** class is the foundation of the game, defining common properties and methods for all card types. It includes functionality for interacting with the cards and handling game logic.

### 🃟 Derived Booster Card Classes

- **Extra Time Card**: Adds extra time to the game, extending the time available for players to complete their tasks.
- **Glancer Card**: Reveals all the cards on the board for 5 seconds, allowing players to view the hidden cards temporarily.
- **Double Point Card**: Doubles the points awarded for matching pairs and overrides the base points of the card. Special versions of this card, such as those with a "Gem Image, Color Purple," make matched pairs worth more.

## 🔧 Design Patterns

### 🏭 Factory Pattern

The project uses the Factory Design Pattern to handle the creation of various card types. This pattern centralizes the logic for creating card instances, simplifying the management and instantiation of different card objects.

## 🧩 Virtual Functions and Overrides

- **Points Calculation**: The base **`Card`** class provides default point values, which are overridden by specific card types like the Double Point Card to offer customized point values for gameplay.
- **Signal Emission**: The base **`Card`** class includes virtual methods for handling user interactions, such as double-click events. Derived classes override these methods to emit different signals based on their unique functionalities.

## 🛠️ Technologies Used

- **Programming Language**: C++
- **Framework**: Qt
- **Design Pattern**: Factory Pattern
- **Inheritance**: Utilized through base (`Card`) and derived classes
- **Virtual and Override Methods**: Employed for dynamic functionality and customization

## 📸 Screenshots

<img width="752" alt="Screenshot 2024-08-16 at 8 42 05 PM" src="https://github.com/user-attachments/assets/c95355fb-86bc-4bd9-b03f-c49e22cbdc91">

<img width="495" alt="Screenshot 2024-08-16 at 8 42 18 PM" src="https://github.com/user-attachments/assets/5387ac3b-f1b3-42c1-9f17-0db59060910e">

<img width="462" alt="Screenshot 2024-08-16 at 8 42 29 PM" src="https://github.com/user-attachments/assets/d89e5ae0-1be3-416e-a5c0-5e2cd6827747">

<img width="295" alt="Screenshot 2024-08-16 at 8 42 37 PM" src="https://github.com/user-attachments/assets/fca447b3-4c05-4cb1-b0d5-2f70d1723dc2">
