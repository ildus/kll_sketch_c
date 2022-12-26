project('kll_sketch', 'c', default_options : ['c_std=gnu17'])
catch2 = dependency('catch2')
sources = [
  'lib/main.c',
  'lib/compactor.c',
]
include_dirs = [
  'include',
]

kll_sketch_lib = static_library('kll',
  sources: sources,
  include_directories: include_dirs,
  c_args: ['-Wall', '-Wextra', '-pedantic'],
  link_args: '-lm',
)
