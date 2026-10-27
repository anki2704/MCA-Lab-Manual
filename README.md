# MCA-Lab-Manual[MCA-Lab-Manual-README.md](https://github.com/user-attachments/files/32166342/MCA-Lab-Manual-README.md)
# MCA Lab Manual

This repository contains my MCA 1st Semester Lab Manual work.

---

# 📚 Git & GitHub Complete Guide

This section contains all the commands required to manage this project from scratch.

If I forget any Git/GitHub command in the future, I can start from the beginning of this README.

---

# 1. Git Basic Setup

## Check Git version

```bash
git --version
```

## Check Git configuration

```bash
git config --list
```

## Set username

```bash
git config --global user.name "Your Name"
```

## Set email

```bash
git config --global user.email "your-email@example.com"
```

---

# 2. Start Git in a New Project

Open the project folder in VS Code.

Open:

```text
Terminal → New Terminal
```

Check current location:

```bash
pwd
```

For Windows CMD:

```bash
cd
```

Initialize Git:

```bash
git init
```

Rename branch to main:

```bash
git branch -M main
```

Check status:

```bash
git status
```

---

# 3. Connect Local Project to GitHub

Create a repository on GitHub.

Then connect the local project:

```bash
git remote add origin https://github.com/anki2704/MCA-Lab-Manual.git
```

Check remote:

```bash
git remote -v
```

---

# 4. First Upload to GitHub

Check files:

```bash
git status
```

Add all files:

```bash
git add .
```

Check again:

```bash
git status
```

Create first commit:

```bash
git commit -m "Initial project setup"
```

Push to GitHub:

```bash
git push -u origin main
```

After the first push, normal push can be:

```bash
git push
```

---

# 5. If GitHub Already Has README.md

Sometimes the GitHub repository already contains a README or other files.

If local and GitHub histories are different, use:

```bash
git pull origin main --allow-unrelated-histories
```

Then resolve any conflict if Git asks.

After resolving:

```bash
git add .
```

```bash
git commit -m "Resolve merge conflict"
```

Then:

```bash
git push origin main
```

---

# 6. ⭐ DAILY WORKFLOW

This is the most important section.

Whenever I start working on the project:

## Step 1: Check branch

```bash
git branch
```

The branch with `*` is the current branch.

## Step 2: Get latest changes

Before starting work:

```bash
git pull origin main
```

## Step 3: Make my changes

Add files, edit files, delete files, or complete lab work.

## Step 4: Check what changed

```bash
git status
```

## Step 5: Add changes

```bash
git add .
```

## Step 6: Commit

```bash
git commit -m "Add Week 6 practical"
```

## Step 7: Push

```bash
git push
```

Done! ✅

---

# 7. 🔥 SIMPLE DAILY FORMULA

```text
PULL
 ↓
WORK
 ↓
STATUS
 ↓
ADD
 ↓
COMMIT
 ↓
PUSH
```

Commands:

```bash
git pull origin main

# Make changes

git status

git add .

git commit -m "Describe your changes"

git push
```

---

# 8. 🌿 BRANCH WORKFLOW

For team projects, it is better to avoid directly working on `main`.

Create your own branch.

## Create a new branch

```bash
git switch -c week6
```

Alternative:

```bash
git checkout -b week6
```

## Check current branch

```bash
git branch
```

---

# 9. Work on Your Branch

First get latest main:

```bash
git switch main
```

```bash
git pull origin main
```

Create your branch:

```bash
git switch -c week6
```

Now work on your files.

Then:

```bash
git status
```

```bash
git add .
```

```bash
git commit -m "Add Week 6 practical"
```

---

# 10. Push Your Branch

First time:

```bash
git push -u origin week6
```

After that:

```bash
git push
```

Now the branch will appear on GitHub.

---

# 11. 🔀 Pull Request (PR)

After pushing your branch:

```text
Local Branch
     ↓
   Push
     ↓
  GitHub
     ↓
Create Pull Request
     ↓
Review
     ↓
Merge
     ↓
   main
```

A Pull Request means:

> "I have made changes in my branch. Please review and add them to main."

---

# 12. After PR Is Merged

Once the Pull Request is merged into `main`:

```bash
git switch main
```

```bash
git pull origin main
```

Now local `main` has the merged changes.

---

# 13. 🌱 If a Branch Already Exists

Do NOT create it again.

Check:

```bash
git branch -a
```

If you see:

```text
remotes/origin/week6
```

the branch already exists on GitHub.

Switch to it:

```bash
git switch week6
```

If Git says the branch does not exist locally:

```bash
git fetch origin
```

Then:

```bash
git switch -c week6 --track origin/week6
```

---

# 14. 🔄 Keep Your Branch Updated

If another team member merged new changes into `main`:

```bash
git switch main
```

```bash
git pull origin main
```

Switch back:

```bash
git switch week6
```

Merge latest main:

```bash
git merge main
```

If there are no conflicts, continue working.

---

# 15. Check All Branches

Local branches:

```bash
git branch
```

Local + remote branches:

```bash
git branch -a
```

---

# 16. Switch Branch

```bash
git switch branch-name
```

Example:

```bash
git switch main
```

```bash
git switch week6
```

Old command:

```bash
git checkout branch-name
```

---

# 17. Create Branch

Modern command:

```bash
git switch -c branch-name
```

Example:

```bash
git switch -c week7
```

Old command:

```bash
git checkout -b week7
```

---

# 18. Rename a Branch

```bash
git branch -M new-name
```

Example:

```bash
git branch -M main
```

---

# 19. Delete a Local Branch

```bash
git branch -d branch-name
```

Force delete:

```bash
git branch -D branch-name
```

Be careful with `-D`.

---

# 20. Delete a Remote Branch

```bash
git push origin --delete branch-name
```

Example:

```bash
git push origin --delete week6
```

---

# 21. 📥 Pull vs Fetch

## Pull

```bash
git pull origin main
```

Pull downloads AND applies changes to the current branch.

## Fetch

```bash
git fetch origin
```

Fetch downloads information from GitHub but does not automatically merge it into your current branch.

---

# 22. 📤 Add, Commit, Push Meaning

```text
Files
 ↓
git add .
 ↓
Staging Area
 ↓
git commit
 ↓
Local Repository
 ↓
git push
 ↓
GitHub
```

### git add

Selects changes for the next commit.

```bash
git add .
```

### git commit

Saves changes in local Git history.

```bash
git commit -m "Add Week 6 practical"
```

### git push

Uploads local commits to GitHub.

```bash
git push
```

---

# 23. Check Commit History

Short format:

```bash
git log --oneline
```

Detailed history:

```bash
git log
```

---

# 24. Check Remote Repository

```bash
git remote -v
```

---

# 25. Change Remote URL

```bash
git remote set-url origin NEW_REPOSITORY_URL
```

Check:

```bash
git remote -v
```

---

# 26. ⚠️ COMMON ERRORS

## Error: "rejected - fetch first"

Use:

```bash
git pull origin main
```

Then:

```bash
git push
```

---

# 27. Error: "unrelated histories"

If Git says:

```text
fatal: refusing to merge unrelated histories
```

Use:

```bash
git pull origin main --allow-unrelated-histories
```

Resolve conflicts if required.

Then:

```bash
git add .
```

```bash
git commit -m "Resolve merge conflict"
```

```bash
git push
```

---

# 28. ⚔️ Merge Conflict

A conflict happens when Git cannot automatically decide which version to keep.

Git may show:

```text
<<<<<<< HEAD
Your changes
=======
Other changes
>>>>>>> main
```

Open the file and decide what should remain.

Then:

```bash
git add .
```

```bash
git commit -m "Resolve merge conflict"
```

Then:

```bash
git push
```

---

# 29. I Made Changes But Don't Want Them

Check status:

```bash
git status
```

Discard changes in a specific file:

```bash
git restore filename
```

Discard all uncommitted changes:

```bash
git restore .
```

⚠️ This permanently removes uncommitted changes.

---

# 30. Temporarily Save Changes

If I need to switch branches but don't want to commit yet:

```bash
git stash
```

Switch branch:

```bash
git switch main
```

Return later:

```bash
git switch week6
```

Restore saved changes:

```bash
git stash pop
```

---

# 31. 📌 Useful Commit Message Examples

```bash
git commit -m "Add Week 6 practical"
```

```bash
git commit -m "Add C++ array programs"
```

```bash
git commit -m "Update DBMS lab work"
```

```bash
git commit -m "Add Week 7 lab work"
```

Avoid:

```bash
git commit -m "changes"
```

```bash
git commit -m "done"
```

---

# 32. 🧠 COMPLETE TEAM WORKFLOW

```text
                 GitHub
                   │
                   ▼
                 main
                   │
             git pull
                   │
                   ▼
            Create Branch
                   │
                   ▼
              Make Changes
                   │
                   ▼
              git add .
                   │
                   ▼
             git commit
                   │
                   ▼
              git push
                   │
                   ▼
          Pull Request (PR)
                   │
                   ▼
                Review
                   │
                   ▼
              Merge to main
                   │
                   ▼
          git switch main
                   │
                   ▼
          git pull origin main
                   │
                   ▼
             Latest main
```

---

# 33. ⭐ MY DAILY TEAM COMMANDS

If I am working using a branch:

```bash
git switch main
git pull origin main

git switch my-branch

# Make changes

git status
git add .
git commit -m "Describe changes"
git push
```

Then:

```text
GitHub → Pull Request → Review → Merge
```

After merge:

```bash
git switch main
git pull origin main
```

---

# 34. 🚨 BEFORE USING FORCE COMMANDS

Avoid:

```bash
git push --force
```

unless I completely understand why I need it.

Force push can overwrite remote history.

---

# 35. 🏆 THE 7 COMMANDS I MUST REMEMBER

If I forget everything else, remember these:

```bash
git status
git pull
git add .
git commit -m "message"
git push
git branch
git switch branch-name
```

Basic cycle:

```text
git pull
   ↓
WORK
   ↓
git status
   ↓
git add .
   ↓
git commit
   ↓
git push
```

---

# 📌 Quick Cheat Sheet

| Task | Command |
|------|---------|
| Check status | `git status` |
| Start Git | `git init` |
| Add all files | `git add .` |
| Commit | `git commit -m "message"` |
| Push | `git push` |
| First push | `git push -u origin main` |
| Pull | `git pull origin main` |
| Check branches | `git branch` |
| Check all branches | `git branch -a` |
| Create branch | `git switch -c branch-name` |
| Switch branch | `git switch branch-name` |
| Fetch | `git fetch origin` |
| View commits | `git log --oneline` |
| View remote | `git remote -v` |
| Save temporary changes | `git stash` |
| Restore stash | `git stash pop` |
| Discard file changes | `git restore filename` |

---

# 🎯 Golden Rule

### Before work:

```bash
git pull origin main
```

### After work:

```bash
git status
git add .
git commit -m "Describe changes"
git push
```

### For team work:

```text
Branch → Work → Commit → Push → PR → Review → Merge
```

Always check:

```bash
git status
```

before committing or switching branches.





DAILY workflow



        START
          ↓
   git pull origin main
          ↓
   New / Assigned Task
          ↓
   Create your branch
          ↓
   Work / Code changes
          ↓
      git status
          ↓
      git add .
          ↓
      git commit -m "message"
          ↓
      git push origin branch-name
          ↓
     Create Pull Request
          ↓
      Team Review
       ↙       ↘
   Changes?     No
      ↓          ↓
   Fix & push   Merge
                 ↓
              main
                 ↓
                END
