# RBXGameBanWiper

A tool that helps ensure your alternate Roblox accounts remain unaffected if one of your primary accounts gets banned from a game.

## Getting Started

1. **Installation:** First, download the latest release from the [releases page](https://github.com/worldtoview/RBXGameBanWiper/releases) and install it on your Windows machine.

2. **Log out:** Make sure you are logged out of the banned account and that it is removed from the account manager.

3. **Run the application:** Run the executable file included in the installation. This will do the needed steps to make sure your alts will not be detected.

5. **Enjoy:** After successful initialization, you should now be able to join the game that has one of your accounts banned.

## Fixing Common Issues

### Error: "The code execution cannot proceed because VCRUNTIME140_1.dll was not found. Reinstalling the program may fix this problem."

If you encounter this error, it means that your system is missing the Microsoft Visual C++ Redistributable for Visual Studio 2015, 2017, and 2019. To resolve this issue, follow these steps:

1. **Download the Redistributable:**
   - Visit the [Microsoft Visual C++ Redistributable download page](https://www.microsoft.com/en-sg/download/details.aspx?id=48145).

2. **Restart Your Computer:**
   - After installation, restart your computer to ensure the changes take effect.

3. **Run the Application Again:**
   - Launch the executable again to see if the issue is resolved.

## Notice

**RBXGameBanWiper is completely safe to use within Roblox.** It does not perform any code injection or modifications to the game. The application simply alters a file within the Roblox folder that the Ban API uses.

**RBXGameBanWiper is not a virus.** Some antivirus scanners on [VirusTotal](https://www.virustotal.com/gui/file/267d7870c7c22d8a22ab292904551a8fcd40e900a842ff920208d89d127bd1ca?nocache=1) may flag the application as malicious, with 6 out of 75 showing false positives. This is due to the nature of the application altering a file within the Roblox folder, which can trigger some heuristic-based security measures.
