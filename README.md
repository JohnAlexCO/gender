# gender 

## Usage
1. Download the source `git clone https://github.com/JohnAlexCO/gender.git --depth=1`
2. Pick an appropriate language `#define`
3. `#include "gender.h"` after the language guard
4. Make sure to include a definition for `character_t` which includes a `gender_t *gender`
5. Compile with any C89/C99 Compiler

## Innards
See `locale/locale.h` for language headers.
See `templates/templates.h` for gender templates.
See `debug/debug.h` for debugging functions.
See `gender.c` for helper functions.

## Contributing
1. Open an Issue describing what modifications you're making to the code and why
2. Name the Pull request like `SEE: #{issue number}`. I know this is a Github-ism, but this is a Github repo, so

## License
`gender` is available to you under the permissive MIT License.
`gender` is &copy; Modula 2024, all rights reserved.
