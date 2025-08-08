# Markdown Notes for README/Notes

## Headings
- Use `#` for headings:
  - `# Title` → Main title
  - `## Subheading` → Subheading
  - `### Sub-subheading` → Smaller heading

## Bullet Points
- Use `-` or `*` for unordered lists:
  ```markdown
  - Item 1
  - Item 2
    - Subitem
  ```
- Output:
  - Item 1
  - Item 2
    - Subitem

## Numbered Lists
- Use `1.`, `2.` for ordered lists:
  ```markdown
  1. Step one
  2. Step two
     1. Substep
  ```
- Output:
  1. Step one
  2. Step two
     1. Substep

## Code Blocks
- Use triple backticks (`````) with language for syntax highlighting:
  ```markdown
  ```cpp
  int x = 10;
  cout << x;
  ```
  ```bash
  g++ main.cpp
  ```
  ```

## Bold and Italics
- Bold: `**text**` → **text**
- Italics: `*text*` → *text*
- Example:
  ```markdown
  **Selection Sort**: *O(n²) time complexity*
  ```

## Links
- Use `[text](URL)`:
  ```markdown
  [C++ Docs](https://en.cppreference.com)
  ```

## Images
- Use `![alt text](path)`:
  ```markdown
  ![Output](screenshots/output.png)
  ```

## Tables
- Use `|` and `-`:
  ```markdown
  | Feature | Description |
  |---------|-------------|
  | Sort    | Selection   |
  | Time    | O(n²)       |
  ```

## Horizontal Rule
- Use `---`:
  ```markdown
  Section 1
  ---
  Section 2
  ```

## Tips
- Preview in VSCode: `Ctrl+Shift+V`.
- Keep lists short and clear.
- Use code blocks for C++ snippets.
- Save and commit:
  ```bash
  git add notes.md
  git commit -m "Add Markdown notes"
  git push origin main
  ```