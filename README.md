

# so_long — 42 Bangkok

> A small 2D game. Move, collect, escape. Built with MiniLibX.

## About

This repository contains my **so_long** project completed at **42 Bangkok** (mandatory part only). The goal is to build a small 2D game where the player moves through a map, collects all collectibles, and reaches the exit. The project is an introduction to **graphical programming** using the MiniLibX library, as well as **map parsing** and **event handling** .

## Environment & Compilation

**Requirements:**
- Unix-like system (Linux recommended)
- `cc` or `gcc`
- `make`
- MiniLibX and its dependencies (`libX11`, `libXext`, `zlib`)

**Compile:**

```bash
make          # builds the so_long executable
make clean    # removes object files
make fclean   # removes object files and the executable
make re       # fclean + all
```

**Run:**

```bash
./so_long maps/valid.ber
```

The map file must have a `.ber` extension and be a valid map (see below).

**42 Norm check:**

```bash
norminette
```

## Map Format

The map is a plain text file with the following characters:

| Character | Meaning |
|---|---|
| `1` | Wall |
| `0` | Empty floor |
| `P` | Player start position |
| `C` | Collectible |
| `E` | Exit |

Example:

```
111111
1P0C01
101001
1C0E01
111111
```

The map must be **rectangular**, **surrounded by walls**, contain **exactly one player**, **exactly one exit**, and **at least one collectible**. The player must also be able to reach every collectible and the exit — the game must be winnable .

## How It Works

1. **Map parsing:** Read the `.ber` file, validate its contents and structure, and store the map in a 2D array.
2. **Validation:** Check that the map is rectangular, enclosed by walls, has the required elements, and is solvable (flood fill or similar path check).
3. **Rendering:** Use MiniLibX to create a window and draw each tile (wall, floor, player, collectible, exit) as an XPM image.
4. **Event handling:** Hook keyboard events (`W`, `A`, `S`, `D` or arrow keys) to move the player. Each move updates the map, redraws the affected tiles, and increments the move counter.
5. **Win condition:** When the player reaches the exit after collecting all collectibles, the game ends with a win message and the window closes.
6. **Exit handling:** Pressing `ESC` or clicking the window's close button terminates the program cleanly, freeing all allocated resources.

## Controls

| Key | Action |
|---|---|
| `W` / `↑` | Move up |
| `A` / `←` | Move left |
| `S` / `↓` | Move down |
| `D` / `→` | Move right |
| `ESC` | Quit |

The current move count is printed to the terminal after each valid move.

## What I Learned

- **MiniLibX basics:** Creating windows, loading XPM textures, rendering images to the screen, and handling the event loop.
- **Map parsing:** Reading a file line by line and validating its structure with clear error messages.
- **Flood fill / path checking:** Verifying that the map is winnable before starting the game.
- **Memory management:** Freeing textures, the map, and the game state on exit — no leaks allowed.
- **The 42 Norm:** No `for` loops, functions ≤ 25 lines, no globals, consistent naming.

## Testing

Common test cases:

1. **Valid map:** `./so_long maps/valid.ber` — game launches, all collectibles reachable, exit works.
2. **Invalid maps:** Non-rectangular map, missing walls, no player, multiple exits, unreachable collectibles — program should print an error and exit cleanly.
3. **Wrong extension:** `./so_long map.txt` — should be rejected.
4. **Leak check:** Run with `valgrind ./so_long maps/valid.ber` and verify no leaks on normal exit and on ESC.

## Notes

This project is a personal learning record (mandatory part only). It is not guaranteed to pass the Moulinette. If you are also at 42 Bangkok, try implementing it yourself first — so_long is the best introduction to graphical programming in the Common Core.

## References

- `man 3 mlx` (MiniLibX documentation)
- 42 Bangkok official so_long subject (Intra)
- 42 Norm documentation
- MiniLibX source and examples (42 GitHub)

