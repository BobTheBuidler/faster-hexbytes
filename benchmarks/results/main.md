#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.653380957225361e-05 | 2.338848869917128e-05 | 11.85% | 13.45% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.67421116049645e-05 | 2.3503040763749203e-05 | 12.11% | 13.78% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.6393536302868295e-05 | 2.351780784928994e-05 | 10.90% | 12.23% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.663795760825277e-05 | 2.3611269282254228e-05 | 11.36% | 12.82% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.6601474655959497e-05 | 2.3544363115766405e-05 | 11.49% | 12.98% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.6429607896463945e-05 | 2.3702094017991513e-05 | 10.32% | 11.51% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.654935815660891e-05 | 2.3989144675632396e-05 | 9.64% | 10.67% | 1.11x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.6767154538393383e-05 | 2.347303484967226e-05 | 12.31% | 14.03% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.6677628471729264e-05 | 2.3770272387441535e-05 | 10.90% | 12.23% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.6591550569592585e-05 | 2.333979294339689e-05 | 12.23% | 13.93% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.672003134723287e-05 | 2.3822698605189397e-05 | 10.84% | 12.16% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6529360296190804e-05 | 2.354503757087509e-05 | 11.25% | 12.67% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.685417551803091e-05 | 2.3626288200306932e-05 | 12.02% | 13.66% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.667247640489586e-05 | 2.36260789849867e-05 | 11.42% | 12.89% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.6612942581400073e-05 | 2.364306451700929e-05 | 11.16% | 12.56% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.658130098840404e-05 | 2.371616818670959e-05 | 10.78% | 12.08% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.6696399705507963e-05 | 2.3232146101747176e-05 | 12.98% | 14.91% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.6684286940842937e-05 | 2.3757241554884232e-05 | 10.97% | 12.32% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.666424084218734e-05 | 2.344079452412565e-05 | 12.09% | 13.75% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.6602791634504135e-05 | 2.3499530330626134e-05 | 11.67% | 13.21% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.6718358067326102e-05 | 2.3603096770683325e-05 | 11.66% | 13.20% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.670493625793007e-05 | 2.3512514690061358e-05 | 11.95% | 13.58% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.6668686830495723e-05 | 2.3596070693024577e-05 | 11.52% | 13.02% | 1.13x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.6671680780249478e-05 | 2.343433279277785e-05 | 12.14% | 13.81% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.6624360493811954e-05 | 2.3701082762260714e-05 | 10.98% | 12.33% | 1.12x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.6575319028556592e-05 | 2.3699379435076022e-05 | 10.82% | 12.14% | 1.12x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.625899877164238e-05 | 2.2753355858188295e-05 | 13.35% | 15.41% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.613459381474868e-05 | 2.2822381334329374e-05 | 12.67% | 14.51% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.6262104460748527e-05 | 2.2902714210137018e-05 | 12.79% | 14.67% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.6064071980222977e-05 | 2.2974685805541033e-05 | 11.85% | 13.45% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.62253935493743e-05 | 2.2843804332855048e-05 | 12.89% | 14.80% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.593577079310055e-05 | 2.3071257419327434e-05 | 11.04% | 12.42% | 1.12x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.6239263672924038e-05 | 2.3027938231208696e-05 | 12.24% | 13.95% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.606663023529959e-05 | 2.2910808152863253e-05 | 12.11% | 13.77% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.6187338600107332e-05 | 2.2917082706799726e-05 | 12.49% | 14.27% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.6340900741318506e-05 | 2.2943716397057674e-05 | 12.90% | 14.81% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.6243460309378392e-05 | 2.2942997188987784e-05 | 12.58% | 14.39% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.621104199735657e-05 | 2.292232823627294e-05 | 12.55% | 14.35% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.5892885043561363e-05 | 2.2969267849291114e-05 | 11.29% | 12.73% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.600576176222985e-05 | 2.2968401523723427e-05 | 11.68% | 13.22% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.6091367871598646e-05 | 2.297915957971474e-05 | 11.93% | 13.54% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.6106413870989025e-05 | 2.302399910016078e-05 | 11.81% | 13.39% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.619684429015282e-05 | 2.311988203128417e-05 | 11.75% | 13.31% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.6072587918822275e-05 | 2.29386847654157e-05 | 12.02% | 13.66% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.6273498976176798e-05 | 2.2918297754756086e-05 | 12.77% | 14.64% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.607795335376388e-05 | 2.2786622149772826e-05 | 12.62% | 14.44% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.628205699341209e-05 | 2.2984331907690177e-05 | 12.55% | 14.35% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.6317218370770104e-05 | 2.301019910818709e-05 | 12.57% | 14.37% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.567286339696879e-05 | 2.2829950869360383e-05 | 11.07% | 12.45% | 1.12x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.6212375290872745e-05 | 2.2948260823670297e-05 | 12.45% | 14.22% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.5815667697902487e-05 | 2.2850562954330284e-05 | 11.49% | 12.98% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.590882529894088e-05 | 2.2811743971627934e-05 | 11.95% | 13.58% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.5780975099511658e-05 | 2.2707815258810498e-05 | 11.92% | 13.53% | 1.14x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.5790972078637598e-05 | 2.294089564547385e-05 | 11.05% | 12.42% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.5800738089059035e-05 | 2.296250552488797e-05 | 11.00% | 12.36% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.5958572521599913e-05 | 2.286163527170613e-05 | 11.93% | 13.55% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.5813141783609618e-05 | 2.29852748137562e-05 | 10.96% | 12.30% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.5943044990287607e-05 | 2.3097368619001913e-05 | 10.97% | 12.32% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.5726044585646313e-05 | 2.2955993250299133e-05 | 10.77% | 12.07% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.5976553881180975e-05 | 2.2876450256208358e-05 | 11.93% | 13.55% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.5899878600180074e-05 | 2.2922661041723234e-05 | 11.50% | 12.99% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.6030726462372395e-05 | 2.2980647908662204e-05 | 11.72% | 13.27% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.589384067528462e-05 | 2.3025379279459928e-05 | 11.08% | 12.46% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.5816475225095937e-05 | 2.3066826381136886e-05 | 10.65% | 11.92% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.5915398116427833e-05 | 2.3039554039074368e-05 | 11.10% | 12.48% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.571148941906056e-05 | 2.2945198347299713e-05 | 10.76% | 12.06% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.5976313684141562e-05 | 2.2876850403472487e-05 | 11.93% | 13.55% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.6020466678070308e-05 | 2.287609593835061e-05 | 12.08% | 13.75% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.6060539196641683e-05 | 2.2848128107425373e-05 | 12.33% | 14.06% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.5978511934943965e-05 | 2.2999207012324635e-05 | 11.47% | 12.95% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.597359369267894e-05 | 2.290295607774325e-05 | 11.82% | 13.41% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.599242420883767e-05 | 2.304842435879294e-05 | 11.33% | 12.77% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.5880227604069434e-05 | 2.3066001975717782e-05 | 10.87% | 12.20% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.5943099592410906e-05 | 2.2887003488347658e-05 | 11.78% | 13.35% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.5867027451217587e-05 | 2.314892525430555e-05 | 10.51% | 11.74% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.587272936669946e-05 | 2.282014090378181e-05 | 11.80% | 13.38% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.5761307010401232e-05 | 2.29415483031405e-05 | 10.95% | 12.29% | 1.12x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.5975478954402544e-05 | 2.3037694464164075e-05 | 11.31% | 12.75% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.5983096110222006e-05 | 2.2999960494824915e-05 | 11.48% | 12.97% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.5994890638411297e-05 | 2.302942892389781e-05 | 11.41% | 12.88% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.6247984385252532e-05 | 2.302300558616956e-05 | 12.29% | 14.01% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.6084093076024088e-05 | 2.3229833354397155e-05 | 10.94% | 12.29% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.610492763452378e-05 | 2.339721956078422e-05 | 10.37% | 11.57% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.588665313798834e-05 | 2.288319109057978e-05 | 11.60% | 13.13% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.5943760900735373e-05 | 2.3185537956253466e-05 | 10.63% | 11.90% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.613354012066483e-05 | 2.3010545976695818e-05 | 11.95% | 13.57% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.5968374620234084e-05 | 2.323481950189421e-05 | 10.53% | 11.76% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.5881981407960018e-05 | 2.3124684858633313e-05 | 10.65% | 11.92% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.6019020024667182e-05 | 2.3122130649704478e-05 | 11.13% | 12.53% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.5986923328613333e-05 | 2.2882682896621415e-05 | 11.95% | 13.57% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.5858837778490264e-05 | 2.308257067563909e-05 | 10.74% | 12.03% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.589764026136508e-05 | 2.3326777335721175e-05 | 9.93% | 11.02% | 1.11x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.606783953298276e-05 | 2.3451375799005754e-05 | 10.04% | 11.16% | 1.11x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.5865193551737514e-05 | 2.3174907393291156e-05 | 10.40% | 11.61% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.837796994189629e-05 | 2.3132024687485947e-05 | 18.49% | 22.68% | 1.23x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.5942753436970098e-05 | 2.3027586208325796e-05 | 11.24% | 12.66% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.580455820412092e-05 | 2.3020763436976156e-05 | 10.79% | 12.09% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.5969132788188216e-05 | 2.2863878434577527e-05 | 11.96% | 13.58% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.5918324165913115e-05 | 2.3180183932130436e-05 | 10.56% | 11.81% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.6093246468498472e-05 | 2.3325288254877237e-05 | 10.61% | 11.87% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.5984625197605123e-05 | 2.2954804585844416e-05 | 11.66% | 13.20% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.594522704754207e-05 | 2.33100829678198e-05 | 10.16% | 11.30% | 1.11x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.587480322117313e-05 | 2.3216656690943512e-05 | 10.27% | 11.45% | 1.11x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.601396518250489e-05 | 2.322175260435733e-05 | 10.73% | 12.02% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.6004557993854793e-05 | 2.3059630230414416e-05 | 11.32% | 12.77% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.5923183846993434e-05 | 2.3178901619907773e-05 | 10.59% | 11.84% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.6036313032879358e-05 | 2.3531928813750127e-05 | 9.62% | 10.64% | 1.11x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.59570017232911e-05 | 2.3312421620383944e-05 | 10.19% | 11.34% | 1.11x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.606834335603021e-05 | 2.33357541479738e-05 | 10.48% | 11.71% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.596681232932866e-05 | 2.3178147090919957e-05 | 10.74% | 12.03% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.5809136043160084e-05 | 2.3493380627491463e-05 | 8.97% | 9.86% | 1.10x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.6058806142731667e-05 | 2.306404466409095e-05 | 11.49% | 12.98% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.6023218878965125e-05 | 2.884579000136659e-05 | -10.85% | -9.79% | 0.90x | ❌ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.6112883206534492e-05 | 2.3243466904107348e-05 | 10.99% | 12.35% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.6067221615840713e-05 | 2.338492877564538e-05 | 10.29% | 11.47% | 1.11x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.6047678044951884e-05 | 2.3375206353094174e-05 | 10.26% | 11.43% | 1.11x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.5866935303893484e-05 | 2.347515176494933e-05 | 9.25% | 10.19% | 1.10x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.592071357205642e-05 | 2.3378735959195745e-05 | 9.81% | 10.87% | 1.11x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.608921625781262e-05 | 2.3395281125375107e-05 | 10.33% | 11.51% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.6091871667248128e-05 | 2.3389956462479597e-05 | 10.36% | 11.55% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.616009424942044e-05 | 3.0924583644481625e-05 | -18.21% | -15.41% | 0.85x | ❌ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.5875363268157287e-05 | 2.897690631559564e-05 | -11.99% | -10.70% | 0.89x | ❌ |
| `hexbytes_getitem_index[3-long alternating]` | 2.6019753266024184e-05 | 2.3407080784538172e-05 | 10.04% | 11.16% | 1.11x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.617488465394286e-05 | 2.303072651036241e-05 | 12.01% | 13.65% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.6905243393698036e-05 | 2.354167680557772e-05 | 12.50% | 14.29% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.6089608516589298e-05 | 2.3209228980967767e-05 | 11.04% | 12.41% | 1.12x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.6044157945068296e-05 | 2.3098890425557423e-05 | 11.31% | 12.75% | 1.13x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.597456413349241e-05 | 2.3375676565543328e-05 | 10.01% | 11.12% | 1.11x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.5874811223544028e-05 | 2.2759112136514108e-05 | 12.04% | 13.69% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.6035155293786498e-05 | 2.3127333957515725e-05 | 11.17% | 12.57% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.5894619034305647e-05 | 2.3022659862340615e-05 | 11.09% | 12.47% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.6193691699904956e-05 | 2.3143728407871582e-05 | 11.64% | 13.18% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.5963910632257946e-05 | 2.309880705383155e-05 | 11.03% | 12.40% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.6126387863928594e-05 | 2.294762885090763e-05 | 12.17% | 13.85% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.5901044788697577e-05 | 2.32022437698792e-05 | 10.42% | 11.63% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.5983140715801006e-05 | 2.327303556977068e-05 | 10.43% | 11.64% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.6413550426059565e-05 | 2.3159684810659453e-05 | 12.32% | 14.05% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.6073973070669027e-05 | 2.3304844481461884e-05 | 10.62% | 11.88% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.5782321210529446e-05 | 2.3036431958057686e-05 | 10.65% | 11.92% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6077685774758152e-05 | 2.298978844733795e-05 | 11.84% | 13.43% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.6051419666960446e-05 | 2.3113443324775175e-05 | 11.28% | 12.71% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.5995618309294733e-05 | 2.30004233342399e-05 | 11.52% | 13.02% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.621442176087487e-05 | 2.3169578858831455e-05 | 11.62% | 13.14% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.6385987072905795e-05 | 2.3164308870948156e-05 | 12.21% | 13.91% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.6003440269996592e-05 | 2.316318004013196e-05 | 10.92% | 12.26% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.6051558467265683e-05 | 2.32198568319961e-05 | 10.87% | 12.20% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.5954534162121466e-05 | 2.3188830297600377e-05 | 10.66% | 11.93% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.5881748637303796e-05 | 2.3015502080134286e-05 | 11.07% | 12.45% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.6080619925609413e-05 | 2.3221591666138118e-05 | 10.96% | 12.31% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.5760278355134133e-05 | 2.288496664491533e-05 | 11.16% | 12.56% | 1.13x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.594334705253403e-05 | 2.323034417852674e-05 | 10.46% | 11.68% | 1.12x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.6083453434910144e-05 | 2.3270665903987437e-05 | 10.78% | 12.09% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.6214416463775826e-05 | 2.3084256274289084e-05 | 11.94% | 13.56% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.5990691602706257e-05 | 2.30477572639454e-05 | 11.32% | 12.77% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.6081598985942846e-05 | 2.299750073044847e-05 | 11.82% | 13.41% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.60561133730837e-05 | 2.3084139997610528e-05 | 11.41% | 12.87% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.601587453557305e-05 | 2.3427615499405547e-05 | 9.95% | 11.05% | 1.11x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.595332902132929e-05 | 2.299586427379722e-05 | 11.40% | 12.86% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.6140368261302004e-05 | 2.2970442233420353e-05 | 12.13% | 13.80% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.605369944594145e-05 | 2.329469864206634e-05 | 10.59% | 11.84% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.607499462012736e-05 | 2.3170581807183906e-05 | 11.14% | 12.53% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.6263629088759698e-05 | 2.30452635048413e-05 | 12.25% | 13.97% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.602195548953619e-05 | 2.3314179632159334e-05 | 10.41% | 11.61% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.5938021485196466e-05 | 2.313241045596064e-05 | 10.82% | 12.13% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.6076776126174097e-05 | 2.3128184395210485e-05 | 11.31% | 12.75% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.5952965039083318e-05 | 2.3026577749121954e-05 | 11.28% | 12.71% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.62220795542595e-05 | 2.293967656973739e-05 | 12.52% | 14.31% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.624713881196083e-05 | 2.3039197684215566e-05 | 12.22% | 13.92% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.6151985090367467e-05 | 2.3050344947866103e-05 | 11.86% | 13.46% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.6109710405615024e-05 | 2.281556229985724e-05 | 12.62% | 14.44% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.607726726172278e-05 | 2.3173195344313384e-05 | 11.14% | 12.53% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.6270207836442332e-05 | 2.3266669250945e-05 | 11.43% | 12.91% | 1.13x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 7.86495329901946e-05 | 5.8985601171869384e-05 | 25.00% | 33.34% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 7.870487354295878e-05 | 5.7914134217230125e-05 | 26.42% | 35.90% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 7.871555631852999e-05 | 5.8272588390042005e-05 | 25.97% | 35.08% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 7.798647758950933e-05 | 5.7268079383301766e-05 | 26.57% | 36.18% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 7.888906866362438e-05 | 5.788161051147445e-05 | 26.63% | 36.29% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 7.88209307141958e-05 | 5.764839581958774e-05 | 26.86% | 36.73% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.686588038310811e-05 | 5.439592798798405e-05 | 29.23% | 41.31% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 7.956294049671673e-05 | 5.759917958063919e-05 | 27.61% | 38.13% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 7.884312987559624e-05 | 5.8899687811454317e-05 | 25.30% | 33.86% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 7.866686769379456e-05 | 5.8018645096375704e-05 | 26.25% | 35.59% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 7.978509446474444e-05 | 5.7261073748742776e-05 | 28.23% | 39.34% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 7.920054605796839e-05 | 5.7956229896880116e-05 | 26.82% | 36.66% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.981350586934181e-05 | 5.79143372453831e-05 | 27.44% | 37.81% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 7.985079477248622e-05 | 5.7489281509242984e-05 | 28.00% | 38.90% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 7.966158310196233e-05 | 5.822319541131351e-05 | 26.91% | 36.82% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 7.878767974598039e-05 | 5.8669025678351904e-05 | 25.54% | 34.29% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 7.898452063902419e-05 | 5.78612694257056e-05 | 26.74% | 36.51% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 7.954315939915228e-05 | 5.769467542295575e-05 | 27.47% | 37.87% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 7.91197526516012e-05 | 5.822027836953022e-05 | 26.41% | 35.90% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 7.984966680478978e-05 | 5.771620201903362e-05 | 27.72% | 38.35% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 7.877567008944314e-05 | 5.880245024034845e-05 | 25.35% | 33.97% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 7.878261376771416e-05 | 5.737981972033775e-05 | 27.17% | 37.30% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 7.882702111881295e-05 | 5.795143839976687e-05 | 26.48% | 36.02% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 7.908552716503631e-05 | 5.7987419429610556e-05 | 26.68% | 36.38% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 7.968870898137628e-05 | 6.00344295608952e-05 | 24.66% | 32.74% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 7.852031700905293e-05 | 5.777301186154874e-05 | 26.42% | 35.91% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.634607823651486e-05 | 5.385572912962577e-05 | 29.46% | 41.76% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.639653927963084e-05 | 5.497098498579148e-05 | 28.05% | 38.98% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 7.915043386630584e-05 | 5.811536225156792e-05 | 26.58% | 36.20% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 7.925610244389857e-05 | 5.8561347250500534e-05 | 26.11% | 35.34% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 7.943556319184098e-05 | 5.864625549241999e-05 | 26.17% | 35.45% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.177389882539448e-05 | 5.859933557067786e-05 | 28.34% | 39.55% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.019012218019604e-05 | 5.784844221674876e-05 | 27.86% | 38.62% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 7.848074185273909e-05 | 5.7843581765749624e-05 | 26.30% | 35.68% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 7.870798227617624e-05 | 5.887797673083977e-05 | 25.19% | 33.68% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.785042660778014e-05 | 5.5588234503304325e-05 | 28.60% | 40.05% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.073890152396315e-05 | 5.796562115328655e-05 | 28.21% | 39.29% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 7.990308997125458e-05 | 5.815584908244611e-05 | 27.22% | 37.39% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 7.938023623961109e-05 | 5.7535935449231786e-05 | 27.52% | 37.97% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 7.987078515870111e-05 | 5.7732899848789166e-05 | 27.72% | 38.35% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 7.989432770109796e-05 | 5.809888106731816e-05 | 27.28% | 37.51% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.969748134811967e-05 | 5.783023856446832e-05 | 27.44% | 37.81% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.101689188943543e-05 | 5.776843178429368e-05 | 28.70% | 40.24% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 7.89396824582649e-05 | 5.710665238715371e-05 | 27.66% | 38.23% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 7.970882098173643e-05 | 5.783728073484527e-05 | 27.44% | 37.82% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 7.81164775079886e-05 | 5.987801627849812e-05 | 23.35% | 30.46% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 7.99115192657938e-05 | 5.756439925321729e-05 | 27.96% | 38.82% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.013177970671217e-05 | 5.7440559288218574e-05 | 28.32% | 39.50% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 7.892082679958878e-05 | 5.813183532047659e-05 | 26.34% | 35.76% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 7.862162013385763e-05 | 5.8230311775977e-05 | 25.94% | 35.02% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 7.878610408860725e-05 | 5.878084062696474e-05 | 25.39% | 34.03% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 7.866585945980718e-05 | 5.792307499315902e-05 | 26.37% | 35.81% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 7.972074264290357e-05 | 5.802169911351764e-05 | 27.22% | 37.40% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.031469285403038e-05 | 5.756583157117095e-05 | 28.32% | 39.52% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 7.819911326470262e-05 | 5.8427051078020185e-05 | 25.28% | 33.84% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.748926628652597e-05 | 5.5109477024185456e-05 | 28.88% | 40.61% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.853096933830291e-05 | 5.4792676735136895e-05 | 30.23% | 43.32% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 7.877126753061623e-05 | 5.7648664976185994e-05 | 26.82% | 36.64% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 7.902341225638333e-05 | 5.7589500951529906e-05 | 27.12% | 37.22% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 7.929169415764156e-05 | 5.69906313058011e-05 | 28.13% | 39.13% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 7.757025769654884e-05 | 5.826688947983092e-05 | 24.89% | 33.13% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 7.841403018872173e-05 | 5.735833464998082e-05 | 26.85% | 36.71% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 7.893992540916947e-05 | 5.752611995201643e-05 | 27.13% | 37.22% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 7.873893520398588e-05 | 5.777099584007045e-05 | 26.63% | 36.29% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.703152164538292e-05 | 5.503979508527761e-05 | 28.55% | 39.96% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 7.999361855202249e-05 | 5.780983925101188e-05 | 27.73% | 38.37% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.077289947473703e-05 | 5.7523233074142964e-05 | 28.78% | 40.42% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.029631762045924e-05 | 5.7652553528231276e-05 | 28.20% | 39.28% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 7.947451326315835e-05 | 5.731706956237128e-05 | 27.88% | 38.66% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 7.954667989058372e-05 | 5.7276187426865706e-05 | 28.00% | 38.88% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.979624413250315e-05 | 5.751256540631773e-05 | 27.93% | 38.75% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.021779043940221e-05 | 5.780306771510851e-05 | 27.94% | 38.78% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 7.934809001822198e-05 | 5.74447584836787e-05 | 27.60% | 38.13% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 7.984895823077598e-05 | 5.771922670462391e-05 | 27.71% | 38.34% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 7.953875009796597e-05 | 5.7278867604244805e-05 | 27.99% | 38.86% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.054093192779944e-05 | 5.733059634736944e-05 | 28.82% | 40.49% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 7.976269181949358e-05 | 5.731335449463062e-05 | 28.15% | 39.17% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 7.908928367573366e-05 | 6.0344132937084785e-05 | 23.70% | 31.06% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.121381077940704e-05 | 5.735191608100361e-05 | 29.38% | 41.61% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 7.919447101904538e-05 | 5.764897991046298e-05 | 27.21% | 37.37% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 7.839849930809699e-05 | 5.7620923957630905e-05 | 26.50% | 36.06% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 7.829964736253672e-05 | 5.900924146394235e-05 | 24.64% | 32.69% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.020239009078581e-05 | 5.8200435724000356e-05 | 27.43% | 37.80% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.025243166668157e-05 | 5.885295789316577e-05 | 26.67% | 36.36% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.68742836124308e-05 | 5.513761731551277e-05 | 28.28% | 39.42% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 7.754809316605791e-05 | 5.533958428694735e-05 | 28.64% | 40.13% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 7.805088780900913e-05 | 5.751837100944927e-05 | 26.31% | 35.70% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 7.741264902559338e-05 | 5.676893117352478e-05 | 26.67% | 36.36% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.013131445465437e-05 | 5.6659632815558805e-05 | 29.29% | 41.43% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 7.934078318490061e-05 | 5.613709854697277e-05 | 29.25% | 41.33% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 7.718634114593595e-05 | 5.6176246666977946e-05 | 27.22% | 37.40% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 7.754964050925261e-05 | 5.669771381308378e-05 | 26.89% | 36.78% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 7.828373164506004e-05 | 5.6451820599631186e-05 | 27.89% | 38.67% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.66468935267003e-05 | 5.401840197978121e-05 | 29.52% | 41.89% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 7.818951296568593e-05 | 5.647575057541273e-05 | 27.77% | 38.45% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 7.802985450847375e-05 | 5.6878121159083905e-05 | 27.11% | 37.19% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 7.809557949363078e-05 | 5.6672810189934065e-05 | 27.43% | 37.80% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010041290991781185 | 7.800180225206803e-05 | 22.32% | 28.73% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.601545504545174e-05 | 5.330611184501801e-05 | 29.87% | 42.60% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.74957292927372e-05 | 5.687444503528206e-05 | 26.61% | 36.26% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 7.847014731685785e-05 | 5.678259214176888e-05 | 27.64% | 38.19% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 7.772419996845955e-05 | 5.641368706394702e-05 | 27.42% | 37.78% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 7.679216239972043e-05 | 5.6704731999859284e-05 | 26.16% | 35.42% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 7.850242797603883e-05 | 5.6249161478549705e-05 | 28.35% | 39.56% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.512751050657259e-05 | 7.198232543723536e-05 | 24.33% | 32.15% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.707305856124412e-05 | 5.409719835047273e-05 | 29.81% | 42.47% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.54096009649e-05 | 7.153976690534069e-05 | 25.02% | 33.37% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 7.761489611304894e-05 | 5.640476147955468e-05 | 27.33% | 37.60% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 7.813826166885742e-05 | 5.672094313437391e-05 | 27.41% | 37.76% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 7.82794986549458e-05 | 5.7241916437102376e-05 | 26.87% | 36.75% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 7.795974247207788e-05 | 5.648812281645642e-05 | 27.54% | 38.01% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 7.81394610374221e-05 | 5.674571950341579e-05 | 27.38% | 37.70% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 7.926297177498776e-05 | 5.801875352310266e-05 | 26.80% | 36.62% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.70739384571279e-05 | 5.4381565956727196e-05 | 29.44% | 41.73% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.65556691548534e-05 | 5.427442922040684e-05 | 29.10% | 41.05% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 7.86458027716234e-05 | 5.634924455909775e-05 | 28.35% | 39.57% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.565424284366692e-05 | 5.546491987559304e-05 | 26.69% | 36.40% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 7.799398810466708e-05 | 5.625964042886118e-05 | 27.87% | 38.63% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 7.8169968770391e-05 | 5.666939671937462e-05 | 27.50% | 37.94% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.655727026160806e-05 | 5.675501958764361e-05 | 25.87% | 34.89% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.79633489380834e-05 | 5.619147333512141e-05 | 27.93% | 38.75% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.753502798594037e-05 | 5.663195227720426e-05 | 26.96% | 36.91% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.638736291946645e-05 | 5.3057009827962246e-05 | 30.54% | 43.97% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.671388250777975e-05 | 5.683796528446277e-05 | 25.91% | 34.97% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.718618512855293e-05 | 5.612521012427856e-05 | 27.29% | 37.52% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.704964351228515e-05 | 5.5745358372545705e-05 | 27.65% | 38.22% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010149204401997924 | 7.511753446490059e-05 | 25.99% | 35.11% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.713763248277799e-05 | 5.724546398322963e-05 | 25.79% | 34.75% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.711478828239142e-05 | 5.604119589743594e-05 | 27.33% | 37.60% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.714157780090379e-05 | 5.6585403424626605e-05 | 26.65% | 36.33% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.687432301458433e-05 | 5.646530590459035e-05 | 26.55% | 36.14% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.782181733715793e-05 | 5.6115594516346255e-05 | 27.89% | 38.68% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.713765245079375e-05 | 5.631642750183996e-05 | 26.99% | 36.97% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.41771447096692e-05 | 7.059986242923742e-05 | 25.04% | 33.40% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.893827343254002e-05 | 5.63063319808641e-05 | 28.67% | 40.19% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.500055414902711e-05 | 7.085800984602164e-05 | 25.41% | 34.07% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.790323610003183e-05 | 5.544146209954946e-05 | 28.83% | 40.51% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.734870785105761e-05 | 5.522862051898036e-05 | 28.60% | 40.05% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.762016006512658e-05 | 5.7681564506046575e-05 | 25.69% | 34.57% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.760617254374125e-05 | 5.638018689633236e-05 | 27.35% | 37.65% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.710053204565756e-05 | 5.607433212692324e-05 | 27.27% | 37.50% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.722475977869015e-05 | 5.7064441433297225e-05 | 26.11% | 35.33% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.5368231385461e-05 | 5.3064934077962593e-05 | 29.59% | 42.03% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.497825407472347e-05 | 5.3026821542488854e-05 | 29.28% | 41.40% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.670019189626615e-05 | 5.736082889003785e-05 | 25.21% | 33.72% | 1.34x | ✅ |
| `hexbytes_new['']` | 7.059645844003185e-05 | 3.442898738689233e-05 | 51.23% | 105.05% | 2.05x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.23259174683628e-05 | 4.968413411968458e-05 | 46.19% | 85.83% | 1.86x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.269959155273025e-05 | 4.934969990325166e-05 | 46.76% | 87.84% | 1.88x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.766325640062494e-05 | 4.56097082662388e-05 | 47.97% | 92.20% | 1.92x | ✅ |
| `hexbytes_new['0x']` | 7.607218703996366e-05 | 3.586906904254532e-05 | 52.85% | 112.08% | 2.12x | ✅ |
| `hexbytes_new['0x1234']` | 8.537478953900346e-05 | 4.343225407856963e-05 | 49.13% | 96.57% | 1.97x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.634044025928846e-05 | 4.3510051689491705e-05 | 49.61% | 98.44% | 1.98x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.592783593651546e-05 | 4.373860758177541e-05 | 49.10% | 96.46% | 1.96x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.533678894181774e-05 | 4.3620761244877585e-05 | 48.88% | 95.63% | 1.96x | ✅ |
| `hexbytes_new['abc']` | 8.35840838559641e-05 | 4.4098098286426676e-05 | 47.24% | 89.54% | 1.90x | ✅ |
| `hexbytes_new['deadbeef']` | 7.712410097603769e-05 | 3.9796886267986886e-05 | 48.40% | 93.79% | 1.94x | ✅ |
| `hexbytes_new[0-9]` | 4.237553098194864e-05 | 2.4561353378467633e-05 | 42.04% | 72.53% | 1.73x | ✅ |
| `hexbytes_new[0]` | 0.00012027567639484577 | 5.8574713499033895e-05 | 51.30% | 105.34% | 2.05x | ✅ |
| `hexbytes_new[123456]` | 0.00012462454174863577 | 6.189665332789559e-05 | 50.33% | 101.34% | 2.01x | ✅ |
| `hexbytes_new[2**16]` | 0.00012424798494650618 | 6.132634829361689e-05 | 50.64% | 102.60% | 2.03x | ✅ |
| `hexbytes_new[2**256-1]` | 0.0001291188113120523 | 6.770990295239032e-05 | 47.56% | 90.69% | 1.91x | ✅ |
| `hexbytes_new[2**32]` | 0.00012628625972094522 | 6.527084389047997e-05 | 48.32% | 93.48% | 1.93x | ✅ |
| `hexbytes_new[2**64]` | 0.00012822311755998945 | 6.693084364551448e-05 | 47.80% | 91.58% | 1.92x | ✅ |
| `hexbytes_new[2**8]` | 0.0001243473067194151 | 6.062452481294701e-05 | 51.25% | 105.11% | 2.05x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.2802602837522395e-05 | 2.5113690867530158e-05 | 41.33% | 70.44% | 1.70x | ✅ |
| `hexbytes_new[False]` | 6.014193076095228e-05 | 2.6106251618515015e-05 | 56.59% | 130.37% | 2.30x | ✅ |
| `hexbytes_new[True]` | 6.135654538619984e-05 | 2.6032892631370408e-05 | 57.57% | 135.69% | 2.36x | ✅ |
| `hexbytes_new[all byte values]` | 4.357860636644563e-05 | 2.5087916794061612e-05 | 42.43% | 73.70% | 1.74x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.275049101683403e-05 | 2.4952468267282396e-05 | 41.63% | 71.33% | 1.71x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.336580520896321e-05 | 2.50431593844767e-05 | 42.25% | 73.16% | 1.73x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.194486662216209e-05 | 2.4793388547235904e-05 | 40.89% | 69.18% | 1.69x | ✅ |
| `hexbytes_new[b'']` | 4.277387078877093e-05 | 2.481831352701389e-05 | 41.98% | 72.35% | 1.72x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.2706093857366704e-05 | 2.4629190514506353e-05 | 42.33% | 73.40% | 1.73x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.3566983430182906e-05 | 2.4923960792199976e-05 | 42.79% | 74.80% | 1.75x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.36398417695886e-05 | 2.498256315711048e-05 | 42.75% | 74.68% | 1.75x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.647730619170119e-05 | 3.785034517827293e-05 | 32.98% | 49.21% | 1.49x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.292395817210507e-05 | 2.480527244262916e-05 | 42.21% | 73.04% | 1.73x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.2532291921090754e-05 | 2.504465688442542e-05 | 41.12% | 69.83% | 1.70x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.3137117055950616e-05 | 2.484015603626743e-05 | 42.42% | 73.66% | 1.74x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.304031403399297e-05 | 2.492834359851589e-05 | 42.08% | 72.66% | 1.73x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.299366621646463e-05 | 2.4870512050941776e-05 | 42.15% | 72.87% | 1.73x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.386670923358952e-05 | 2.4900411688935914e-05 | 43.24% | 76.17% | 1.76x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.219480537991861e-05 | 3.188147233988897e-05 | 38.92% | 63.72% | 1.64x | ✅ |
| `hexbytes_new[b'abc']` | 4.213107377848743e-05 | 2.49856432733321e-05 | 40.70% | 68.62% | 1.69x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.765800343031962e-05 | 3.595597057056938e-05 | 46.86% | 88.17% | 1.88x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.999233999448526e-05 | 3.551058618515537e-05 | 49.27% | 97.10% | 1.97x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.897080257538644e-05 | 3.597818203284516e-05 | 47.84% | 91.70% | 1.92x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.738416511523655e-05 | 3.5930905226398895e-05 | 46.68% | 87.54% | 1.88x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.779672347607362e-05 | 3.5716345134433946e-05 | 47.32% | 89.82% | 1.90x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.844441230142297e-05 | 3.555936607463881e-05 | 48.05% | 92.48% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.673911473325756e-05 | 3.275324779349907e-05 | 50.92% | 103.76% | 2.04x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.862754465451073e-05 | 3.536032109666575e-05 | 48.48% | 94.08% | 1.94x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.845372203610093e-05 | 3.520996480882213e-05 | 48.56% | 94.42% | 1.94x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.674963561998463e-05 | 3.514614440168467e-05 | 47.35% | 89.92% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.007807015400603e-05 | 5.6439121650008595e-05 | 37.34% | 59.60% | 1.60x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.732105432416982e-05 | 3.480795664849606e-05 | 48.30% | 93.41% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.74708822400281e-05 | 3.704760410624403e-05 | 45.09% | 82.12% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.843878587754103e-05 | 3.499326261846167e-05 | 48.87% | 95.58% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.86074203373869e-05 | 3.4922028913704976e-05 | 49.10% | 96.46% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.866440794093958e-05 | 3.51136862173072e-05 | 48.86% | 95.55% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.825893283714798e-05 | 3.5704148205986365e-05 | 47.69% | 91.18% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.329166669562633e-05 | 4.97128821673054e-05 | 40.31% | 67.55% | 1.68x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.817474824861169e-05 | 3.534463207550088e-05 | 48.16% | 92.89% | 1.93x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.278239656276546e-05 | 4.895878228970269e-05 | 40.86% | 69.09% | 1.69x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.913892442960655e-05 | 3.5921087178773034e-05 | 48.05% | 92.47% | 1.92x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.766516198001764e-05 | 3.504922257420591e-05 | 48.20% | 93.06% | 1.93x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.732787515030529e-05 | 3.4866288388504566e-05 | 48.21% | 93.10% | 1.93x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.733156915917898e-05 | 3.496331968216028e-05 | 48.07% | 92.58% | 1.93x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.880065991316985e-05 | 3.562408416699163e-05 | 48.22% | 93.13% | 1.93x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.789019430349661e-05 | 3.540158799707423e-05 | 47.85% | 91.77% | 1.92x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.814620388705848e-05 | 3.513374191078289e-05 | 48.44% | 93.96% | 1.94x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.7750958805562e-05 | 3.542239759850872e-05 | 47.72% | 91.27% | 1.91x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.885741833808002e-05 | 3.576254610978975e-05 | 48.06% | 92.54% | 1.93x | ✅ |
| `hexbytes_new[long alternating]` | 5.064392900262916e-05 | 3.212345640909528e-05 | 36.57% | 57.65% | 1.58x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.113830806414662e-05 | 3.98170533515101e-05 | 50.93% | 103.78% | 2.04x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.36150641803708e-05 | 4.12902042150873e-05 | 50.62% | 102.51% | 2.03x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.425663146870392e-05 | 4.125799741289944e-05 | 51.03% | 104.22% | 2.04x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.153535719111028e-05 | 4.119162999277054e-05 | 49.48% | 97.94% | 1.98x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.14993930848649e-05 | 4.1014369598656304e-05 | 49.68% | 98.71% | 1.99x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.21688600707652e-05 | 3.978605305955432e-05 | 51.58% | 106.53% | 2.07x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 7.946931491915902e-05 | 3.744500346572458e-05 | 52.88% | 112.23% | 2.12x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.207648139954876e-05 | 3.969564135783429e-05 | 51.64% | 106.76% | 2.07x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.390732207510218e-05 | 3.920723235438257e-05 | 53.27% | 114.01% | 2.14x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.157136763456708e-05 | 4.076382419648279e-05 | 50.03% | 100.11% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.0001064534052269372 | 6.076323605619442e-05 | 42.92% | 75.19% | 1.75x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.153694372331372e-05 | 4.08782143285059e-05 | 49.87% | 99.46% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.238311788116589e-05 | 3.8996395886167256e-05 | 52.66% | 111.26% | 2.11x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.17330609450104e-05 | 4.002942524323637e-05 | 51.02% | 104.18% | 2.04x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.231775648663049e-05 | 4.0344359996737395e-05 | 50.99% | 104.04% | 2.04x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.161016865425423e-05 | 4.1702200719413985e-05 | 48.90% | 95.70% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.167937004177919e-05 | 4.031505936381499e-05 | 50.64% | 102.60% | 2.03x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.722389345692251e-05 | 5.42390164487412e-05 | 44.21% | 79.25% | 1.79x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.273203609355788e-05 | 3.950049004415983e-05 | 52.25% | 109.45% | 2.09x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.673709705084026e-05 | 5.5852415759408265e-05 | 42.26% | 73.20% | 1.73x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.165897791807826e-05 | 4.1263114386637126e-05 | 49.47% | 97.90% | 1.98x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.160673196465241e-05 | 4.022488863058602e-05 | 50.71% | 102.88% | 2.03x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.211266927058284e-05 | 4.0525753796404964e-05 | 50.65% | 102.62% | 2.03x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.263348679954808e-05 | 4.017623132680364e-05 | 51.38% | 105.68% | 2.06x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.217820660308329e-05 | 3.902381101099317e-05 | 52.51% | 110.58% | 2.11x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.159014656633858e-05 | 4.065368272362727e-05 | 50.17% | 100.70% | 2.01x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.236596967377937e-05 | 4.0600406519401445e-05 | 50.71% | 102.87% | 2.03x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.07271635098993e-05 | 4.0622076001894866e-05 | 49.68% | 98.73% | 1.99x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.231615400382995e-05 | 4.142273929866718e-05 | 49.68% | 98.72% | 1.99x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.251598492157704e-05 | 2.495950509595881e-05 | 41.29% | 70.34% | 1.70x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.1982837858623247e-05 | 2.4685078190046622e-05 | 41.20% | 70.07% | 1.70x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.138918501558836e-05 | 2.4872319170572497e-05 | 39.91% | 66.41% | 1.66x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.215687447460023e-05 | 2.4876374692724676e-05 | 40.99% | 69.47% | 1.69x | ✅ |
| `hexbytes_new[palindrome]` | 4.313630687515745e-05 | 2.4833996296930743e-05 | 42.43% | 73.70% | 1.74x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.203195700451221e-05 | 2.4884892490467937e-05 | 40.80% | 68.91% | 1.69x | ✅ |
| `hexbytes_new[single 0xff]` | 4.180463386102531e-05 | 2.475359045486501e-05 | 40.79% | 68.88% | 1.69x | ✅ |
| `hexbytes_new[single null byte]` | 4.146955164836678e-05 | 2.491336273032036e-05 | 39.92% | 66.46% | 1.66x | ✅ |
| `hexbytes_new[two patterns]` | 4.216404673819052e-05 | 2.5112372832485174e-05 | 40.44% | 67.90% | 1.68x | ✅ |
| `hexbytes_repr[0-9]` | 3.2420697074798225e-05 | 1.4930722126000565e-05 | 53.95% | 117.14% | 2.17x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.0001256335245415865 | 4.1212011471049355e-05 | 67.20% | 204.85% | 3.05x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012539723922708074 | 4.10228083999437e-05 | 67.29% | 205.68% | 3.06x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.139913391458075e-05 | 2.0093794978958865e-05 | 60.91% | 155.80% | 2.56x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.1432450165293224e-05 | 2.0185990632541693e-05 | 60.75% | 154.79% | 2.55x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.3399930804335825e-05 | 1.8041046083211315e-05 | 58.43% | 140.56% | 2.41x | ✅ |
| `hexbytes_repr[b'']` | 2.3260088537895898e-05 | 1.1835675922606888e-05 | 49.12% | 96.53% | 1.97x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.92982221621776e-05 | 1.700707559864936e-05 | 56.72% | 131.07% | 2.31x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.961495929036928e-05 | 1.3953435897962392e-05 | 52.88% | 112.24% | 2.12x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.433137871770804e-05 | 2.3745094829144775e-05 | 63.09% | 170.92% | 2.71x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007746517151763646 | 0.00022524455757550718 | 70.92% | 243.92% | 3.44x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 3.0465246164078468e-05 | 1.4135811065776174e-05 | 53.60% | 115.52% | 2.16x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 3.012562998828179e-05 | 1.4209130280726071e-05 | 52.83% | 112.02% | 2.12x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.1705292588103514e-05 | 1.4690858757194997e-05 | 53.66% | 115.82% | 2.16x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.175372641244544e-05 | 1.4807895451362628e-05 | 53.37% | 114.44% | 2.14x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.9620447724539807e-05 | 1.4073905300057157e-05 | 52.49% | 110.46% | 2.10x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.145078988148601e-05 | 2.0302975634442504e-05 | 60.54% | 153.42% | 2.53x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00040875297055327096 | 0.00012304278843270613 | 69.90% | 232.20% | 3.32x | ✅ |
| `hexbytes_repr[b'abc']` | 2.9400415219601127e-05 | 1.4575973618689797e-05 | 50.42% | 101.70% | 2.02x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0004075067861669187 | 0.00012326120951028772 | 69.75% | 230.60% | 3.31x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.00010217864758349095 | 3.405853158665843e-05 | 66.67% | 200.01% | 3.00x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.331685335730458e-05 | 1.5112224307931484e-05 | 54.64% | 120.46% | 2.20x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.109798407332506e-05 | 1.4764709506504622e-05 | 52.52% | 110.62% | 2.11x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.9901606085991952e-05 | 1.4319602575617787e-05 | 52.11% | 108.82% | 2.09x | ✅ |
| `hexbytes_repr[palindrome]` | 3.4867108101245786e-05 | 1.5799609103940167e-05 | 54.69% | 120.68% | 2.21x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.427450515666822e-05 | 2.3660793225775378e-05 | 63.19% | 171.65% | 2.72x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.8983020941573057e-05 | 1.3943952832514573e-05 | 51.89% | 107.85% | 2.08x | ✅ |
| `hexbytes_repr[single null byte]` | 2.900633083295454e-05 | 1.4001940971271857e-05 | 51.73% | 107.16% | 2.07x | ✅ |
| `hexbytes_repr[two patterns]` | 5.158310004855238e-05 | 2.020049449081948e-05 | 60.84% | 155.36% | 2.55x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.6939458553489537e-05 | 1.426015482638127e-05 | 15.82% | 18.79% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.4426323464729365e-05 | 4.080319327274099e-05 | 8.16% | 8.88% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.437254710030393e-05 | 4.1081705949918696e-05 | 7.42% | 8.01% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.2116334743738326e-05 | 1.9589419222305228e-05 | 11.43% | 12.90% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.201119437352345e-05 | 1.9531922236895588e-05 | 11.26% | 12.69% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.0536966825844435e-05 | 1.7543060112935362e-05 | 14.58% | 17.07% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.1130467047481481e-05 | 1.1457243518503169e-05 | -2.94% | -2.85% | 0.97x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.878501612218859e-05 | 1.6545581342827306e-05 | 11.92% | 13.53% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.6255639423424934e-05 | 1.3741409431450438e-05 | 15.47% | 18.30% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.6442407006166036e-05 | 2.3463223948222585e-05 | 11.27% | 12.70% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022745819556299377 | 0.00022445609264871348 | 1.32% | 1.34% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.608661252851403e-05 | 1.4092999905983758e-05 | 12.39% | 14.15% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.6191696138863234e-05 | 1.3890940141971901e-05 | 14.21% | 16.56% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.760285141740853e-05 | 1.4203939074776465e-05 | 19.31% | 23.93% | 1.24x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.6624822720688677e-05 | 1.407791703823469e-05 | 15.32% | 18.09% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.6163437250072305e-05 | 1.3668127579764273e-05 | 15.44% | 18.26% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.1978360595027415e-05 | 1.970733857102884e-05 | 10.33% | 11.52% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012578003817630056 | 0.00012270106977653185 | 2.45% | 2.51% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.6086829159466528e-05 | 1.4078466388038891e-05 | 12.48% | 14.27% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012513120102625462 | 0.00012280258726215122 | 1.86% | 1.90% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.6872560637287715e-05 | 3.406478933794937e-05 | 7.61% | 8.24% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.688219775346199e-05 | 1.4331631752760579e-05 | 15.11% | 17.80% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.643601276924469e-05 | 1.4176016744565886e-05 | 13.75% | 15.94% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.6245304900766033e-05 | 1.3992642635733643e-05 | 13.87% | 16.10% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.77553267623436e-05 | 1.5360134756003846e-05 | 13.49% | 15.59% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.635658365708457e-05 | 2.3406611226290155e-05 | 11.19% | 12.60% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.5814612489441897e-05 | 1.3572301745880474e-05 | 14.18% | 16.52% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.570942750213434e-05 | 1.3522745419760873e-05 | 13.92% | 16.17% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.2009614183029907e-05 | 1.952461027174007e-05 | 11.29% | 12.73% | 1.13x | ✅ |
