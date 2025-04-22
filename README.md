# SDL_skiplist_c++
# Setting Up SDL2 on Xcode (macOS, M2 Compatible)

 Confirmed working on M2 MacBook Air and M2 Pro  
 This guide covers **only SDL2 setup** (no SDL_Mixer steps)

## 1. Install Homebrew (if not already installed)

Open Terminal and run:

```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

## 2. Install SDL2 via Homebrew

In Terminal:

```bash
brew install sdl2
```

## 3. Create a New Xcode Project

- Open **Xcode** → File → New → Project.
- Choose **Command Line Tool**.
- Language: **C++**.
- Name the project and save.

## 4. Link SDL2 Binary Library in Xcode

- Select your project in the **Project Navigator**.
- Under **Targets**, select your project target.
- Go to **Build Phases** → **Link Binary With Libraries**.
- Click the **+** → **Add Other…**
- Press `Command + Shift + G` and enter:

```
/opt/homebrew/opt/sdl2/lib
```

- Select `libSDL2-2.0.0.dylib` and click **Open**.

## 5. Set Up Header Search Paths

- Select your project → **Build Settings**.
- Search for **Header Search Paths**.
- Double-click and add:

```
/opt/homebrew/include
```

- Set it as **non-recursive** for both Debug and Release.

## 6. Set Up Library Search Paths

- In **Build Settings**, search **Library Search Paths**.
- If it says **inherited**, leave it.
- Otherwise, add:

```
/opt/homebrew/lib
```

- Set it as **non-recursive**.

## 7. Disable Library Validation (for unsigned SDL dylibs)

- Go to **Signing & Capabilities**.
- If **App Sandbox** is not added, click **+ Capability** and add it.
- Expand **App Sandbox** → under **Security**, enable:

```
Disable Library Validation
```

## 8. Final Setup

- Copy code from your `SDL_test_run.txt` into `main.cpp`.
- Clean build with `Shift + Command + K`.
- Build project with `Shift + Command + B`.
- If successful, run it with `Command + R`.

## Notes

If you can't find the SDL2 paths manually, you can search using:

```bash
find / -name "SDL2" 2>/dev/null
```
