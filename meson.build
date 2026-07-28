project('ci-templates-test', 'c',
  version: '0.1.0',
  license: 'MIT',
  meson_version: '>= 0.56.0',
  default_options: [
    'c_std=c11',
    'warning_level=2',
  ],
)

lib = library('example',
  'src/example.c',
  include_directories: include_directories('src'),
  install: true,
)

executable('example-cli',
  'src/main.c',
  link_with: lib,
  include_directories: include_directories('src'),
  install: true,
)

test('basic',
  executable('test-basic',
    'tests/test-basic.c',
    link_with: lib,
    include_directories: include_directories('src'),
  ),
)
