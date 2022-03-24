project('ardopc', 'c',
          version: '1.0.4.2-ALPHA',
    meson_version: '>= 0.50.0',
  default_options: [ 'warning_level=2',
                     'c_std=gnu11',
                   ],
)


config_h = configuration_data()
config_h.set_quoted('PACKAGE_VERSION', meson.project_version())
configure_file(
  output: 'ardopc-config.h',
  configuration: config_h,
)
add_project_arguments([
  '-I' + meson.build_root(),
], language: 'c')

add_project_arguments([
  '-DLINBPQ'
], language : 'c')

subdir('src')
subdir('man')

