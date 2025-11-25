# CPP03 - Inheritance in C++

This project explores **inheritance**, **polymorphism**, and the **diamond problem** in C++ through a series of exercises involving robot classes.

## 📚 Table of Contents

- [Overview](#overview)
- [Exercises](#exercises)
  - [Exercise 00: ClapTrap](#exercise-00-claptrap)
  - [Exercise 01: ScavTrap](#exercise-01-scavtrap)
  - [Exercise 02: FragTrap](#exercise-02-fragtrap)
  - [Exercise 03: DiamondTrap](#exercise-03-diamondtrap)
- [Compilation](#compilation)
- [Key Concepts](#key-concepts)
- [Testing](#testing)

---

## 🎯 Overview

This project implements a hierarchy of robot classes demonstrating C++ inheritance concepts:

ClapTrap (Base Class)
          |
    ______|______
   |             |
   ScavTrap FragTrap
         |   | 
            ___________/ 
                        | DiamondTrap (Diamond Problem)

---

## 📝 Exercises

### Exercise 00: ClapTrap

**Basic class implementation with:**
- Hit points: 10
- Energy points: 10
- Attack damage: 0

**Features:**
- `attack()` - Attacks a target (costs 1 energy)
- `takeDamage()` - Reduces hit points
- `beRepaired()` - Restores hit points (costs 1 energy)

**Compile & Run:**
```bash
cd ex00
make
./claptrap
```

### Exercise 01: ScavTrap
Inherits from ClapTrap with modified attributes:

Hit points: 100
Energy points: 50
Attack damage: 20
Additional Feature:
guardGate() - Enters Gate keeper mode

Key Learning: Basic inheritance and method overriding

**Compile & Run:**
```bash
cd ex01
make
./claptrap
```

### Exercise 02: FragTrap
Inherits from ClapTrap with:

Hit points: 100
Energy points: 100
Attack damage: 30
Additional Feature:
highFivesGuys() - Requests positive high fives

Key Learning: Multiple derived classes from the same base class

**Compile & Run:**
```bash
cd ex02
make
./claptrap
```

### Exercise 03: DiamondTrap
Multiple inheritance from ScavTrap AND FragTrap:

Attributes (Diamond inheritance):

Hit points: 100 (from FragTrap)
Energy points: 50 (from ScavTrap)
Attack damage: 30 (from FragTrap)

Special Features:
whoAmI() - Displays both DiamondTrap and ClapTrap names
Uses ScavTrap::attack() implementation
Inherits both guardGate() and highFivesGuys()

Key Learning:
Diamond problem resolution using virtual inheritance
virtual keyword in inheritance
Name hiding and scope resolution

**Compile & Run:**
```bash
cd ex03
make
./claptrap
```

## 🔨 Compilation
All exercises use the same compilation flags:
```markdown
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
```

Commands:
make        # Compile
make clean  # Remove object files
make fclean # Remove object files and executable
make re     # Recompile everything

🔑 Key Concepts
class ScavTrap : public ClapTrap
{
    // Inherits all protected/public members from ClapTrap
};

2. Protected Access Specifier
class ClapTrap
{
protected:  // Accessible by derived classes
    std::string _name;
    int _hitPoints;
};

3. Virtual Inheritance (Diamond Problem Solution)
class ScavTrap : virtual public ClapTrap { };
class FragTrap : virtual public ClapTrap { };
class DiamondTrap : public ScavTrap, public FragTrap { };

Without virtual, DiamondTrap would have two copies of ClapTrap!

4. Constructor Chain
// Derived class constructor calls base class constructor first
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    // Base class initialized first, then derived class
}

5. Destructor Order
Destructors are called in reverse order:

DiamondTrap → ScavTrap → FragTrap → ClapTrap

🧪 Testing
Each exercise includes comprehensive tests covering:

Test Cases:
✅ Constructor chain - Verify proper initialization order
✅ Basic actions - attack(), takeDamage(), beRepaired()
✅ Energy exhaustion - Test energy point depletion
✅ Death mechanics - Test behavior at 0 HP
✅ Copy constructor - Test deep copying
✅ Assignment operator - Test copy assignment
✅ Special abilities - guardGate(), highFivesGuys(), whoAmI()
✅ Destructor chain - Verify proper cleanup order

--- Creating DiamondTrap ---
ClapTrap Diamondy_clap_name created with parameterized constructor.
FragTrap Default constructor called for Diamondy_clap_name
ScavTrap Diamondy_clap_name created with default constructor.
DiamondTrap Parameterized constructor called for Diamondy

--- DiamondTrap actions ---
ScavTrap Diamondy_clap_name attacks TargetDummy, causing 30 points of damage!

--- Testing Special Abilities ---
DiamondTrap name: Diamondy, ClapTrap name: Diamondy_clap_name
ScavTrap Diamondy_clap_name is now in Gate Keeper mode.
FragTrap Diamondy_clap_name is requesting a high five ✋😄

🎓 Learning Objectives
By completing this project, you will understand:

✅ Inheritance hierarchy and class relationships
✅ Access specifiers (public, protected, private)
✅ Method overriding and polymorphism
✅ Virtual inheritance and the diamond problem
✅ Constructor/Destructor chains in inheritance
✅ Copy semantics in derived classes
✅ Scope resolution operator (::)
✅ Orthodox Canonical Form in derived classes

📖 Additional Notes
Orthodox Canonical Form
Each class implements:

Default constructor
Copy constructor
Copy assignment operator
Destructor

🤝 Author
hparveen - 42 School Student

⚠️ Important Notes
No direct interaction between ClapTrap instances (as per subject requirements)
Energy points are consumed by attacks and repairs
Dead ClapTraps (HP = 0) cannot perform actions
Virtual inheritance is mandatory for DiamondTrap to avoid ambiguity
