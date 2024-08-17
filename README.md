# Card-Based Game

## Project Overview

This project is a card-based game developed using C++ and the Qt framework. It features a variety of cards, each with unique functionalities and scoring mechanisms, providing an engaging and interactive gaming experience. Players interact with different types of cards to gain advantages, such as extra time, revealing hidden cards, or doubling their points.

### Key Components

#### Card Base Class

The **`Card`** class is the foundation of the game, defining common properties and methods for all card types. It includes functionality for interacting with the cards and handling game logic.

#### Derived Booster Card Classes

- **Extra Time Card**: Adds extra time to the game, extending the time available for players to complete their tasks.
- **Glancer Card**: Reveals all the cards on the board for 5 seconds, allowing players to view the hidden cards temporarily.
- **Double Point Card**: Doubles the points awarded for matching pairs and overrides the base points of the card. Special versions of this card, such as those with a "Gem Image, Color Purple," make matched pairs worth more.

### Design Patterns

#### Factory Pattern

The project uses the Factory Design Pattern to handle the creation of various card types. This pattern centralizes the logic for creating card instances, simplifying the management and instantiation of different card objects.

### Virtual Functions and Overrides

- **Points Calculation**: The base **`Card`** class provides default point values, which are overridden by specific card types like the Double Point Card to offer customized point values for gameplay.
- **Signal Emission**: The base **`Card`** class includes virtual methods for handling user interactions, such as double-click events. Derived classes override these methods to emit different signals based on their unique functionalities.

### Technologies Used

- **Programming Language**: C++
- **Framework**: Qt
- **Design Pattern**: Factory Pattern
- **Inheritance**: Utilized through base (`Card`) and derived classes
- **Virtual and Override Methods**: Employed for dynamic functionality and customization

### Screenshots

