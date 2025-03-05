# Commit Message Guidelines

To maintain a consistent and clear commit history, follow these strict rules when writing commit messages.

## Structure

Each commit message must have the following format:

```
<prefix>: <short description>

<long description>
```

---

### Prefixes

Use one of the following prefixes to categorize your commit:
- **feat**: Introducing a new feature
- **fix**: Fixing a bug
- **refactor**: Code refactoring without changing functionality
- **docs**: Documentation updates
- **style**: Code style improvements (formatting, linting, etc.)
- **test**: Adding or modifying tests
- **chore**: Maintenance tasks (dependencies, scripts, etc.)

## Short Description
- Write a concise summary of the change (max 50 characters).
- Use the imperative mood (e.g., "Add new API endpoint" instead of "Added").
- Do not end with a period.

## Long Description
- Provide additional details if necessary.
- List each major change on a new line.
- Explain the motivation and impact of the change.

---

## Examples

### Example 1 (Feature Addition)
```
feat: Implement user authentication

- Add JWT-based authentication
- Create login and registration endpoints
- Secure protected routes
```

### Example 2 (Bug Fix)
```
fix: Resolve crash on startup

- Fix null pointer exception in MainActivity
- Ensure database initialization runs before accessing data
```

### Example 3 (Code Refactoring)
```
refactor: Optimize database queries

- Replace N+1 queries with batch fetching
- Improve indexing for faster lookups
```