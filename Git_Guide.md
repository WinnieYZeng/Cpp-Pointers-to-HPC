# 🚀 Git Practical Guide: Troubleshooting & Workflow

This document summarizes the core Git commands and solutions to common issues encountered while building the `Cpp-Pointers-to-HPC` repository.

---

## 🛠️ Core Workflow (Daily Routine)

Follow these "Big Three" steps to sync your C++ progress with GitHub:

1. **Check Status**: `git status` (See what has changed)
2. **Stage Changes**: `git add .` (Or `git add <folder_name>` for precision)
3. **Commit**: `git commit -m "feat: complete Day X pointer exercises"`
4. **Push**: `git push origin main`

---

## 🚨 Common Errors & Solutions

### 1. Remote Conflict (Rejected Push)
**Error**: `![rejected] main -> main (fetch first)`
- **Cause**: GitHub contains files (like `README` or `LICENSE`) that do not exist locally.
- **Solution A (Gentle)**: `git pull origin main --rebase` (Fetch remote changes and put them before your local commits).
- **Solution B (Forceful)**: `git push -f origin main` (**Warning**: This overwrites the remote with your local version. Use only if you want a clean start).

### 2. Network Issues (Connection Reset)
**Error**: `Failed to connect to github.com port 443` or `Connection reset by peer`
- **Cause**: Network instability or firewall blocking HTTPS traffic.
- **Solutions**:
    - **Set Proxy**: `git config --global http.proxy http://127.0.0.1:7890` (Adjust port to your VPN settings).
    - **Switch Network**: Try using a mobile hotspot.
    - **Unset Proxy**: `git config --global --unset http.proxy` (If the proxy itself is failing).

### 3. Remote Already Exists
**Error**: `fatal: remote origin already exists`
- **Solution**: Remove the old association and re-add:
    ```bash
    git remote remove origin
    git remote add origin [https://github.com/WinnieYZeng/Cpp-Pointers-to-HPC.git](https://github.com/WinnieYZeng/Cpp-Pointers-to-HPC.git)
    ```

### 4. Cleaning Up Mistakes (The `.gitignore` Fix)
**Issue**: Accidentally pushed binary files (`.exe`, `.o`, `.out`) or system junk.
- **Solution**:
    1. Define rules in a `.gitignore` file.
    2. Clear Git cache without deleting local files: `git rm -r --cached .`
    3. Re-add and push: `git add .` -> `git commit` -> `git push`.

---

## 💡 Best Practices for HPC Projects

* **Top-Level Root**: Always run `git init` at the project root, not inside subfolders (like `Day1/`). This keeps your GitHub structure organized.
* **Keep Local as "Source of Truth"**: Avoid editing files directly on the GitHub website to prevent sync conflicts.
* **Use .gitignore Early**: HPC compilation generates many heavy binaries. Ignoring them keeps your repo lightweight and fast.

---
