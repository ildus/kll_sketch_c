project('kll_sketch', 'c',
  default_options : ['c_std=gnu17'],
)
sources = [
  'lib/main.c',
  'lib/compactor.c',
  'lib/quantile.c',
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

test_sources = [
  'lib/test_kll.c',
]

kll_sketch_test = executable('test_kll',
  sources: test_sources,
  include_directories: include_dirs,
  cpp_args: ['-Wall', '-Wextra', '-pedantic'],
  link_args: '-lm',
  link_with: [kll_sketch_lib],
)
