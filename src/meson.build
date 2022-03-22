ardopc_sources = [
  'main.c',
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
]

executable('ardopc', ardopc_sources,
  dependencies: ardopc_deps,
  install: true,
)
