# My_defender — Tower defense in C

**Epitech coursework · 2021 · Historical project**

*My_defender* is a tower-defense game written in **C** with **CSFML** (the C binding for SFML). The project is named *La revanche des gueux* in its source code. The goal is to defend against approaching zombie enemies.

> **Status:** This is an early academic project, preserved as-is. It is **not actively maintained** and has **not been rebuilt or tested on a current toolchain**. It is not representative of my most recent professional work.

## Features found in the source

- Game loop, keyboard/mouse interaction and custom cursor
- Towers: placement, attack handling and related game logic
- Enemies: movement, path following and damage/death handling
- Main menu, settings, pause screen and end-game screen
- Graphics and sound integration through CSFML

These features are reflected in the repository's source structure; they are **not a claim that the current build has been verified**.

## Technologies and layout

- **Language:** C
- **Graphics / input / audio:** CSFML
- **Build files:** Makefile and GCC-based commands
- **Source:** [`src/`](src), with gameplay code in `src/game/`, `src/tower/` and `src/enemies/`
- **Declarations:** [`include.h`](include.h)
- **Bundled assets:** `used_images/`, `used_fonts/`, `used_sounds/`

## Building and limitations

The [Makefile](Makefile) was written for the original coursework environment, and expects a compatible C compiler, CSFML libraries and the project's local `lib/my` code.

An old Makefile and old dependencies are **not a reliable installation guide on current systems**. Before attempting to build, dependencies and build targets may need to be repaired. No current CI, working binary or test result is provided.

The project is useful as evidence of earlier low-level/game programming experience, not as a production-ready game.

## Rights and reuse

This repository contains binary assets (including fonts, images and music) whose individual licenses have **not been established in this README**. Please do not assume those assets are freely reusable. No new license is granted here.

For newer work in full-stack development, automation and AI systems, see [my GitHub profile](https://github.com/matheovitali).
