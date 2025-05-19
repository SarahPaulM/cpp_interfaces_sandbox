# 🐦 Bird Behavior Simulator – C++ OOP Practice

This project is a simple C++ program designed to demonstrate core object-oriented programming (OOP) concepts using a "Bird Behavior" simulation. It focuses on:

- ✅ Inheritance and polymorphism
- ✅ Virtual methods and abstract base classes
- ✅ Composition and the Strategy design pattern
- ✅ Smart pointers for memory safety
- ✅ Clean, modern C++ architecture

---

## ✨ Overview

The code simulates birds with different flying behaviors. Each bird is composed of a `FlyBehavior` strategy, allowing flexibility in defining how different birds fly.

This project is intentionally simple, but written with robustness and maintainability in mind—good habits for larger C++ systems like embedded medical devices or safety-critical systems.

---

## 📦 Structure

```cpp
class FlyBehavior        // Abstract base class
 ├── class Flapping      // Implements wing-flapping flight

class Bird               // Base class for all birds
 ├── class Finch         // A singing, flying finch
