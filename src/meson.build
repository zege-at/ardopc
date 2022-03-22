ardopc_sources = [

  'LinSerial.c',
  'KISSModule.c',
  'pktARDOP.c',
  'pktSession.c',
  'BusyDetect.c',
  'i2cDisplay.c',
  'ALSASound.c',
  'ARDOPC.c',
  'ardopSampleArrays.c',
  'ARQ.c',
  'FFT.c',
  'FEC.c',
  'HostInterface.c',
  'Modulate.c',
  'rs.c',
  'berlekamp.c',
  'galois.c',
  'SoundInput.c',
  'TCPHostInterface.c',
  'SCSHostInterface.c',
]

ardopc_deps = [
  dependency('glib-2.0'),
  dependency('alsa'),
  dependency('threads'),
]

cc = meson.get_compiler('c')
m_dep = cc.find_library('m', required : true)
rt_dep = cc.find_library('rt', required : true)

executable('ardopc', ardopc_sources,
  dependencies: [ardopc_deps, m_dep, rt_dep],
  install: true,
)
