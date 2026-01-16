#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/perf/int-to-bytes-fastpath/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/perf/int-to-bytes-fastpath/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.6405395704308657e-05 | 2.568559386621613e-05 | 2.73% | 2.80% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.6617684878604956e-05 | 2.5773577665101665e-05 | 3.17% | 3.28% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.6986255492705472e-05 | 2.5650236459155696e-05 | 4.95% | 5.21% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.676959705650789e-05 | 2.5517428899772326e-05 | 4.68% | 4.91% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.6682280706276965e-05 | 2.5773171601174133e-05 | 3.41% | 3.53% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.649822566554255e-05 | 2.6116414706660328e-05 | 1.44% | 1.46% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.646700559731974e-05 | 2.5730378840361323e-05 | 2.78% | 2.86% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.6391244187345645e-05 | 2.5782872242198612e-05 | 2.31% | 2.36% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.629789978771208e-05 | 2.5882200743747926e-05 | 1.58% | 1.61% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.646465173886892e-05 | 2.5787575135709117e-05 | 2.56% | 2.63% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.63616453944962e-05 | 2.5858830273706167e-05 | 1.91% | 1.94% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6456163950391314e-05 | 2.5677974841065728e-05 | 2.94% | 3.03% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.66177028325803e-05 | 2.594280328166016e-05 | 2.54% | 2.60% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.6846496057932117e-05 | 2.59816023912278e-05 | 3.22% | 3.33% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.640829691725203e-05 | 2.577340357564722e-05 | 2.40% | 2.46% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.632470726983939e-05 | 2.5924195667657893e-05 | 1.52% | 1.54% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.649438571382802e-05 | 2.600544142684581e-05 | 1.85% | 1.88% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.6588996733318433e-05 | 2.573743650007182e-05 | 3.20% | 3.31% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.6604115394307196e-05 | 2.5834316185961535e-05 | 2.89% | 2.98% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.6557615980064434e-05 | 2.5793979886311417e-05 | 2.88% | 2.96% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.6540342332525025e-05 | 2.59434793030986e-05 | 2.25% | 2.30% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.676464498446987e-05 | 2.5841327966011007e-05 | 3.45% | 3.57% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.6606715846669687e-05 | 2.584140945458638e-05 | 2.88% | 2.96% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.664052026033299e-05 | 2.59406546639899e-05 | 2.63% | 2.70% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.6673361876934723e-05 | 2.5985026955471654e-05 | 2.58% | 2.65% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.6550085052054343e-05 | 2.608353567040652e-05 | 1.76% | 1.79% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.5859666103731584e-05 | 2.613160657351093e-05 | -1.05% | -1.04% | 0.99x | ❌ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.5784268269072788e-05 | 2.5576091670802148e-05 | 0.81% | 0.81% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.5801920214401883e-05 | 2.544790499953088e-05 | 1.37% | 1.39% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.60761764786062e-05 | 2.5496309400224118e-05 | 2.22% | 2.27% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.58471221912257e-05 | 2.5686879129522514e-05 | 0.62% | 0.62% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.576247995450011e-05 | 2.565018338954673e-05 | 0.44% | 0.44% | 1.00x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.6201542326890565e-05 | 2.513529981387358e-05 | 4.07% | 4.24% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.6080388340022277e-05 | 2.5261628572124883e-05 | 3.14% | 3.24% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.5649507099081203e-05 | 2.5333508015550575e-05 | 1.23% | 1.25% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.579802733510714e-05 | 2.5674811663316224e-05 | 0.48% | 0.48% | 1.00x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.6193543037968347e-05 | 2.5629441387498526e-05 | 2.15% | 2.20% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.611288647897264e-05 | 2.5256056356888574e-05 | 3.28% | 3.39% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.6005802818186623e-05 | 2.536117332396387e-05 | 2.48% | 2.54% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.558897749165709e-05 | 2.528938225789071e-05 | 1.17% | 1.18% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.6375674905867298e-05 | 2.5320070080863186e-05 | 4.00% | 4.17% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.6157087755187232e-05 | 2.536746001519893e-05 | 3.02% | 3.11% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.611765548190804e-05 | 2.55899204983456e-05 | 2.02% | 2.06% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.608873108803026e-05 | 2.5377363780531558e-05 | 2.73% | 2.80% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.5782262201725523e-05 | 2.5597314213127626e-05 | 0.72% | 0.72% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.5694693936016632e-05 | 2.566794760167255e-05 | 0.10% | 0.10% | 1.00x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.5832870837365617e-05 | 2.5547090395917095e-05 | 1.11% | 1.12% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.5878306964578354e-05 | 2.5538223198114517e-05 | 1.31% | 1.33% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.5761276791991975e-05 | 2.565136940724721e-05 | 0.43% | 0.43% | 1.00x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.555326049503544e-05 | 2.529394597264057e-05 | 1.01% | 1.03% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.5706820950884944e-05 | 2.5576798041007294e-05 | 0.51% | 0.51% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.5764509114734958e-05 | 2.5458347175731525e-05 | 1.19% | 1.20% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.5640465024845493e-05 | 2.564236649012739e-05 | -0.01% | -0.01% | 1.00x | ❌ |
| `hexbytes_getitem_index[0-two patterns]` | 2.5717081909977324e-05 | 2.5608881885655077e-05 | 0.42% | 0.42% | 1.00x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.5765745321428047e-05 | 2.552909818940244e-05 | 0.92% | 0.93% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.5611838624973043e-05 | 2.5642186183543103e-05 | -0.12% | -0.12% | 1.00x | ❌ |
| `hexbytes_getitem_index[1-all byte values]` | 2.6055725657609713e-05 | 2.5741066260054517e-05 | 1.21% | 1.22% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.5604229078073257e-05 | 2.570925635217429e-05 | -0.41% | -0.41% | 1.00x | ❌ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.579679430261751e-05 | 2.5621438286407727e-05 | 0.68% | 0.68% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.58112415685991e-05 | 2.5597254231364577e-05 | 0.83% | 0.84% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.5885653543506063e-05 | 2.5607751741486393e-05 | 1.07% | 1.09% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.5772390693948703e-05 | 2.5677841218645098e-05 | 0.37% | 0.37% | 1.00x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.5746427224464658e-05 | 2.5694868009897827e-05 | 0.20% | 0.20% | 1.00x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.581184260331316e-05 | 2.5584784952441006e-05 | 0.88% | 0.89% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.57113317831933e-05 | 2.558429109082548e-05 | 0.49% | 0.50% | 1.00x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.591929207022018e-05 | 2.5683875320437092e-05 | 0.91% | 0.92% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.565280869095591e-05 | 2.5689847333788967e-05 | -0.14% | -0.14% | 1.00x | ❌ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.5603591093282328e-05 | 2.5601804941771702e-05 | 0.01% | 0.01% | 1.00x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.581008335667794e-05 | 2.5676175198532967e-05 | 0.52% | 0.52% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.5815599821215466e-05 | 2.559616619417652e-05 | 0.85% | 0.86% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.6046705344149676e-05 | 2.5697759426791836e-05 | 1.34% | 1.36% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.605619439672182e-05 | 2.566449491203526e-05 | 1.50% | 1.53% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.595086616709828e-05 | 2.5594481274265228e-05 | 1.37% | 1.39% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.5796130119470647e-05 | 2.572182204825867e-05 | 0.29% | 0.29% | 1.00x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.596711783852945e-05 | 2.5603245743159754e-05 | 1.40% | 1.42% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.571654918462859e-05 | 2.549385248476106e-05 | 0.87% | 0.87% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.563685295980624e-05 | 2.5743815656897923e-05 | -0.42% | -0.42% | 1.00x | ❌ |
| `hexbytes_getitem_index[1-palindrome]` | 2.5956624516843188e-05 | 2.5640816092593702e-05 | 1.22% | 1.23% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.5817707061853298e-05 | 2.5556919918424107e-05 | 1.01% | 1.02% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.5844903019696723e-05 | 2.572316844414584e-05 | 0.47% | 0.47% | 1.00x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.5799748828154407e-05 | 2.5469219591743436e-05 | 1.28% | 1.30% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.6150778114930774e-05 | 2.527877350365873e-05 | 3.33% | 3.45% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.589984342029718e-05 | 2.531000507670136e-05 | 2.28% | 2.33% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.5784950022186444e-05 | 2.521878201887551e-05 | 2.20% | 2.25% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.6032890217390276e-05 | 2.5392190242803648e-05 | 2.46% | 2.52% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.6032824019070952e-05 | 2.5363491358074126e-05 | 2.57% | 2.64% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.5789038477094188e-05 | 2.5513645311483507e-05 | 1.07% | 1.08% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.561190990378834e-05 | 2.5220978873357685e-05 | 1.53% | 1.55% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.576469363286687e-05 | 2.5445685164678992e-05 | 1.24% | 1.25% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.57585546640119e-05 | 2.5379520277584177e-05 | 1.47% | 1.49% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.5818862805624482e-05 | 2.5358845093370425e-05 | 1.78% | 1.81% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.5870783177235403e-05 | 2.5589467209605204e-05 | 1.09% | 1.10% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.588427151370258e-05 | 2.5220915169445877e-05 | 2.56% | 2.63% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.5862054849215316e-05 | 2.543235356434458e-05 | 1.66% | 1.69% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.5590423385822272e-05 | 2.5504296573188074e-05 | 0.34% | 0.34% | 1.00x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.5886524727923038e-05 | 2.5396692887324135e-05 | 1.89% | 1.93% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.579283282304159e-05 | 2.5608861017598046e-05 | 0.71% | 0.72% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.5784173902582505e-05 | 2.575494037864552e-05 | 0.11% | 0.11% | 1.00x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.5632816795012832e-05 | 2.5297161521890517e-05 | 1.31% | 1.33% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.5902976215732326e-05 | 2.5557936227348525e-05 | 1.33% | 1.35% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.5846124494321772e-05 | 2.5471104722103297e-05 | 1.45% | 1.47% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.5948688996866823e-05 | 2.5254099309597644e-05 | 2.68% | 2.75% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.5865640284721222e-05 | 2.545260498254248e-05 | 1.60% | 1.62% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.577330908155253e-05 | 2.5232134424854584e-05 | 2.10% | 2.14% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.586028710852496e-05 | 2.531299756227365e-05 | 2.12% | 2.16% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.6240436206002498e-05 | 2.5290159934827426e-05 | 3.62% | 3.76% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.55703107973389e-05 | 2.5672998826220197e-05 | -0.40% | -0.40% | 1.00x | ❌ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.608092599048088e-05 | 2.5670332007258992e-05 | 1.57% | 1.60% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.5916085579161027e-05 | 2.5774092215398692e-05 | 0.55% | 0.55% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.6010397135489814e-05 | 2.5818114451143176e-05 | 0.74% | 0.74% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.573311097222436e-05 | 2.570158821395956e-05 | 0.12% | 0.12% | 1.00x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.6132370459232494e-05 | 2.5172888388672667e-05 | 3.67% | 3.81% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.5915277989584953e-05 | 2.5209012499216636e-05 | 2.73% | 2.80% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.5905313993134895e-05 | 2.5244275585401742e-05 | 2.55% | 2.62% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.613313932017088e-05 | 2.5552831766591514e-05 | 2.22% | 2.27% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.5743445918009637e-05 | 2.5808260945547133e-05 | -0.25% | -0.25% | 1.00x | ❌ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.5755584412638752e-05 | 2.575707823900371e-05 | -0.01% | -0.01% | 1.00x | ❌ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.61403279826722e-05 | 2.5289422032336075e-05 | 3.26% | 3.36% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.602272641435346e-05 | 2.5291114296378117e-05 | 2.81% | 2.89% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.6104069158826492e-05 | 2.520928058978856e-05 | 3.43% | 3.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.5945131317451694e-05 | 2.5275088563714526e-05 | 2.58% | 2.65% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.6443659452866335e-05 | 2.5412406580979076e-05 | 3.90% | 4.06% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.6092204252114496e-05 | 2.5624278798249502e-05 | 1.79% | 1.83% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.6005681696830945e-05 | 2.536744219894419e-05 | 2.45% | 2.52% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.586603801799213e-05 | 2.5677429082093917e-05 | 0.73% | 0.73% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.627916013028363e-05 | 2.576237670321458e-05 | 1.97% | 2.01% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.5960725081844283e-05 | 2.5686817449023904e-05 | 1.06% | 1.07% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.6158313903611284e-05 | 2.5367376375768645e-05 | 3.02% | 3.12% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.60179581940098e-05 | 2.5256369615389575e-05 | 2.93% | 3.02% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.5888583392998732e-05 | 2.5449290061700895e-05 | 1.70% | 1.73% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.592120679538637e-05 | 2.543092953500616e-05 | 1.89% | 1.93% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.6137973129962683e-05 | 2.5241449292025904e-05 | 3.43% | 3.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.557070499415686e-05 | 2.5418887885341618e-05 | 0.59% | 0.60% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.5868467888411616e-05 | 2.524941418760405e-05 | 2.39% | 2.45% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.612542412650359e-05 | 2.5438305623995837e-05 | 2.63% | 2.70% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.5573304276425105e-05 | 2.5421102380664262e-05 | 0.60% | 0.60% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.5731903979588784e-05 | 2.5347761996936415e-05 | 1.49% | 1.52% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.5872767913996015e-05 | 2.5386173590614082e-05 | 1.88% | 1.92% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.5745283317419806e-05 | 2.5527448297451862e-05 | 0.85% | 0.85% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.591065616646947e-05 | 2.5427022536885693e-05 | 1.87% | 1.90% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.573309601325241e-05 | 2.5487926964560468e-05 | 0.95% | 0.96% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.5758653653261007e-05 | 2.5540298285997887e-05 | 0.85% | 0.85% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.5722163842575932e-05 | 2.542930803205589e-05 | 1.14% | 1.15% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.569416434798942e-05 | 2.5392106718923473e-05 | 1.18% | 1.19% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.626555194271112e-05 | 2.540121416002114e-05 | 3.29% | 3.40% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.592076639468982e-05 | 2.536800180935372e-05 | 2.13% | 2.18% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.5862166310113116e-05 | 2.5359368313267813e-05 | 1.94% | 1.98% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.5545522859069866e-05 | 2.5289527348030957e-05 | 1.00% | 1.01% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.5710412704362604e-05 | 2.537821905859323e-05 | 1.29% | 1.31% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.5798485309485282e-05 | 2.54169090988725e-05 | 1.48% | 1.50% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.578296845893174e-05 | 2.540738518144468e-05 | 1.46% | 1.48% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.569674736384116e-05 | 2.5187837643652975e-05 | 1.98% | 2.02% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.5820011987131475e-05 | 2.5266913611787364e-05 | 2.14% | 2.19% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.576752104340413e-05 | 2.540159379571385e-05 | 1.42% | 1.44% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.5946237802499326e-05 | 2.5498349731426655e-05 | 1.73% | 1.76% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.577621720963264e-05 | 2.5368931408058236e-05 | 1.58% | 1.61% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.5794663031041343e-05 | 2.5214506695927515e-05 | 2.25% | 2.30% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.5873946832011183e-05 | 2.5466514707055182e-05 | 1.57% | 1.60% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.5756568520603382e-05 | 2.533789765251765e-05 | 1.63% | 1.65% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.574259711252317e-05 | 2.5407172082421886e-05 | 1.30% | 1.32% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.60957376330223e-05 | 2.541252289633326e-05 | 2.62% | 2.69% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.5832478620759924e-05 | 2.5522478614950837e-05 | 1.20% | 1.21% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.599486334598954e-05 | 2.5430119361490376e-05 | 2.17% | 2.22% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.5677807310154062e-05 | 2.5570488789618207e-05 | 0.42% | 0.42% | 1.00x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.5890187525518816e-05 | 2.5513528076780276e-05 | 1.45% | 1.48% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.5872449224804276e-05 | 2.536349085453749e-05 | 1.97% | 2.01% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.6017551833550435e-05 | 2.5440063415441234e-05 | 2.22% | 2.27% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.5945439178045232e-05 | 2.5432238119410525e-05 | 1.98% | 2.02% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.6124477246579162e-05 | 2.5557051477283336e-05 | 2.17% | 2.22% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.5699945364437068e-05 | 2.5429252733115255e-05 | 1.05% | 1.06% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.5759554720500984e-05 | 2.5199376142407928e-05 | 2.17% | 2.22% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.613918099715581e-05 | 2.5368701363862683e-05 | 2.95% | 3.04% | 1.03x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.135988628625537e-05 | 5.9798827194928066e-05 | 26.50% | 36.06% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.189604450391562e-05 | 5.9820943172201784e-05 | 26.96% | 36.90% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.141667457913644e-05 | 5.983598560982646e-05 | 26.51% | 36.07% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.1824365911739e-05 | 5.989796051232288e-05 | 26.80% | 36.61% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.180651719966277e-05 | 5.8994507031634626e-05 | 27.89% | 38.67% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.162780078270662e-05 | 5.8632507415533084e-05 | 28.17% | 39.22% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.850417964979738e-05 | 5.636252048331183e-05 | 28.20% | 39.28% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.193643752814881e-05 | 5.966039072810205e-05 | 27.19% | 37.34% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.161545531264351e-05 | 5.954109789630062e-05 | 27.05% | 37.07% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.161078714042981e-05 | 6.044702285326592e-05 | 25.93% | 35.01% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.190908486163218e-05 | 5.960633368847447e-05 | 27.23% | 37.42% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.117264187055028e-05 | 5.969591588093281e-05 | 26.46% | 35.98% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.19360037957421e-05 | 5.969636556208549e-05 | 27.14% | 37.25% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.126935657792517e-05 | 5.9962265530442394e-05 | 26.22% | 35.53% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.18979253882831e-05 | 6.185166201050487e-05 | 24.48% | 32.41% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.150980565286328e-05 | 6.0008168404689715e-05 | 26.38% | 35.83% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.163383145781027e-05 | 5.878974520276865e-05 | 27.98% | 38.86% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.087361998468152e-05 | 5.976521519218394e-05 | 26.10% | 35.32% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.081615807749506e-05 | 5.9428452957151436e-05 | 26.46% | 35.99% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.176976376592068e-05 | 6.0149924951363856e-05 | 26.44% | 35.94% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.173606086868461e-05 | 5.966874483010332e-05 | 27.00% | 36.98% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.176939726035698e-05 | 5.972018960358797e-05 | 26.97% | 36.92% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.139318802255674e-05 | 6.048229725048805e-05 | 25.69% | 34.57% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.126019140677616e-05 | 5.9909493845457026e-05 | 26.27% | 35.64% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.147111262677285e-05 | 5.995171223688095e-05 | 26.41% | 35.89% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.153973018782269e-05 | 5.9403769884578066e-05 | 27.15% | 37.26% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.759916226228033e-05 | 5.6676229359325705e-05 | 26.96% | 36.92% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.835145008838659e-05 | 5.6999532271555595e-05 | 27.25% | 37.46% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.10010258701285e-05 | 5.9566349569103426e-05 | 26.46% | 35.98% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.295024175789044e-05 | 6.246836817931375e-05 | 24.69% | 32.79% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.248676350499219e-05 | 6.015789703946816e-05 | 27.07% | 37.12% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.24519046111278e-05 | 6.093882486063474e-05 | 26.09% | 35.30% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.385736856883276e-05 | 6.089682832893119e-05 | 27.38% | 37.70% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.20738505427593e-05 | 6.227207198975357e-05 | 24.13% | 31.80% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.244821554321677e-05 | 6.018223424504707e-05 | 27.01% | 37.00% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.842429504868853e-05 | 5.753116478121666e-05 | 26.64% | 36.32% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.259808663552839e-05 | 5.8910391204402026e-05 | 28.68% | 40.21% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.257316231807467e-05 | 6.091351280130005e-05 | 26.23% | 35.56% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.227849123226958e-05 | 6.308939615232541e-05 | 23.32% | 30.42% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.277596950235735e-05 | 6.0667043924504584e-05 | 26.71% | 36.44% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.211743930215066e-05 | 6.04313646491493e-05 | 26.41% | 35.89% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.32753633610715e-05 | 6.135532889625756e-05 | 26.32% | 35.73% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.229021242975884e-05 | 6.0074591382231117e-05 | 27.00% | 36.98% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.200629536882787e-05 | 6.071876531417012e-05 | 25.96% | 35.06% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.276805282020781e-05 | 6.0561827647936376e-05 | 26.83% | 36.67% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.267991789340722e-05 | 6.053703185783164e-05 | 26.78% | 36.58% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.234213501350933e-05 | 6.007420893287525e-05 | 27.04% | 37.07% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.182136278211015e-05 | 5.9171733228939485e-05 | 27.68% | 38.28% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.254493297803424e-05 | 6.033916599610311e-05 | 26.90% | 36.80% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.225108334679626e-05 | 6.0726849201624934e-05 | 26.17% | 35.44% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.235260030397859e-05 | 6.0987535387288225e-05 | 25.94% | 35.03% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.2464297355633e-05 | 6.049224050279511e-05 | 26.64% | 36.32% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.256512488403946e-05 | 6.030448586105995e-05 | 26.96% | 36.91% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.273653774921239e-05 | 6.088644205930536e-05 | 26.41% | 35.89% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.21932744449248e-05 | 6.114785480195673e-05 | 25.60% | 34.42% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.859060590729177e-05 | 5.819501727230112e-05 | 25.95% | 35.05% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.861271138715879e-05 | 5.763097780304695e-05 | 26.69% | 36.41% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.262577627639913e-05 | 6.036388520286975e-05 | 26.94% | 36.88% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.201816308037204e-05 | 6.0723000634422725e-05 | 25.96% | 35.07% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.205257536466712e-05 | 6.023801338954518e-05 | 26.59% | 36.21% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.18101726267249e-05 | 6.047793876412494e-05 | 26.08% | 35.27% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.294969633814393e-05 | 6.0004125586190004e-05 | 27.66% | 38.24% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.216771052432887e-05 | 6.107220338784168e-05 | 25.67% | 34.54% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.232785319389256e-05 | 6.0315848303383716e-05 | 26.74% | 36.49% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.917434228046332e-05 | 5.796834060049512e-05 | 26.78% | 36.58% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.253651397254044e-05 | 6.0674702696956824e-05 | 26.49% | 36.03% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.240714971094285e-05 | 6.107723350947423e-05 | 25.88% | 34.92% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.286112319491402e-05 | 6.085901874640408e-05 | 26.55% | 36.15% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.24604455633053e-05 | 6.171866207945481e-05 | 25.15% | 33.61% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.181263492077947e-05 | 5.9959974757452075e-05 | 26.71% | 36.45% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.194339882824163e-05 | 6.107587104447501e-05 | 25.47% | 34.17% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.259788496634811e-05 | 6.065913224188719e-05 | 26.56% | 36.17% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.269033354197447e-05 | 6.0874049617454636e-05 | 26.38% | 35.84% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.335165050907623e-05 | 6.119209181047716e-05 | 26.59% | 36.21% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.252006374737724e-05 | 5.987370396375077e-05 | 27.44% | 37.82% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.303528434506862e-05 | 6.0439849160159996e-05 | 27.21% | 37.38% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.155565605997589e-05 | 6.00440541676618e-05 | 26.38% | 35.83% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.231843865080915e-05 | 6.061423868407972e-05 | 26.37% | 35.81% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.19019462369587e-05 | 6.0088635219314064e-05 | 26.63% | 36.30% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.190511165310226e-05 | 6.064496524811156e-05 | 25.96% | 35.06% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.22286469457772e-05 | 6.056710268558083e-05 | 26.34% | 35.76% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.17381341328985e-05 | 6.35553296915335e-05 | 22.25% | 28.61% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.195688591999027e-05 | 6.100523608401541e-05 | 25.56% | 34.34% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.23323944280617e-05 | 6.016300973816024e-05 | 26.93% | 36.85% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.930254628607918e-05 | 5.804392028740788e-05 | 26.81% | 36.63% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 7.882007723332275e-05 | 5.8363986117333064e-05 | 25.95% | 35.05% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.27400644613187e-05 | 6.0583478343216964e-05 | 26.78% | 36.57% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.263704607344926e-05 | 5.873450134503336e-05 | 28.92% | 40.70% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.137216753770216e-05 | 5.887042852595356e-05 | 27.65% | 38.22% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.177367529224574e-05 | 5.8834575720831346e-05 | 28.05% | 38.99% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.323298977910352e-05 | 5.854026881973011e-05 | 29.67% | 42.18% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.358538257588118e-05 | 5.909492686616008e-05 | 29.30% | 41.44% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.11626752697863e-05 | 5.8636830249507544e-05 | 27.75% | 38.42% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.79463925333959e-05 | 5.7117482225578474e-05 | 26.72% | 36.47% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.102351058693323e-05 | 5.889341523643581e-05 | 27.31% | 37.58% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.127783260619307e-05 | 6.0048935535718696e-05 | 26.12% | 35.35% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.188378446965628e-05 | 5.9494953058427726e-05 | 27.34% | 37.63% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010458627909446888 | 8.089241844188152e-05 | 22.65% | 29.29% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.759648055481712e-05 | 5.677392963198559e-05 | 26.83% | 36.68% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.163453287962485e-05 | 5.960866314890256e-05 | 26.98% | 36.95% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.086782202322679e-05 | 5.9185691279549665e-05 | 26.81% | 36.63% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.077878819241576e-05 | 5.9955695543295856e-05 | 25.78% | 34.73% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.065847366069851e-05 | 5.9403544811440726e-05 | 26.35% | 35.78% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.153975916048605e-05 | 5.960110069420462e-05 | 26.91% | 36.81% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.892982827349444e-05 | 7.473581381712496e-05 | 24.46% | 32.37% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.73742551417403e-05 | 5.711157198667786e-05 | 26.19% | 35.48% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.955428895256105e-05 | 7.54222762106069e-05 | 24.24% | 32.00% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.128587160810294e-05 | 5.93207406743167e-05 | 27.02% | 37.03% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.053549945921177e-05 | 5.8140489792162824e-05 | 27.81% | 38.52% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.140763322478255e-05 | 5.9984963918882125e-05 | 26.32% | 35.71% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.124332978014097e-05 | 5.952347545007329e-05 | 26.73% | 36.49% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.161730285400941e-05 | 5.8943486650084056e-05 | 27.78% | 38.47% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.138485885789921e-05 | 5.9170932649025254e-05 | 27.29% | 37.54% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.862217077969279e-05 | 5.754330012393803e-05 | 26.81% | 36.63% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.837434133810012e-05 | 5.738592863849698e-05 | 26.78% | 36.57% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.244928654810246e-05 | 5.9217871255313554e-05 | 28.18% | 39.23% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.847899926930443e-05 | 5.8024079586868446e-05 | 26.06% | 35.25% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 7.997090255086077e-05 | 5.8441182538647485e-05 | 26.92% | 36.84% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 7.972798485413296e-05 | 5.8596097313862805e-05 | 26.50% | 36.06% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.950096086669914e-05 | 5.783033074732592e-05 | 27.26% | 37.47% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.919933336176185e-05 | 5.7997327595508806e-05 | 26.77% | 36.56% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.780952812890797e-05 | 5.776118573338247e-05 | 25.77% | 34.71% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.648804027586594e-05 | 5.6125244484327134e-05 | 26.62% | 36.28% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.795044905809537e-05 | 5.7884448241171824e-05 | 25.74% | 34.67% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.885684241887579e-05 | 5.850422208083482e-05 | 25.81% | 34.79% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.908756951524525e-05 | 5.80032724194138e-05 | 26.66% | 36.35% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010196965583287939 | 7.930459946194247e-05 | 22.23% | 28.58% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.881825427210472e-05 | 5.8252044977928714e-05 | 26.09% | 35.31% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.871648535425559e-05 | 5.768316592150097e-05 | 26.72% | 36.46% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.880164861885457e-05 | 5.756521395387916e-05 | 26.95% | 36.89% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.86413316378761e-05 | 5.8012972537260034e-05 | 26.23% | 35.56% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.843677550578554e-05 | 5.9020434267426436e-05 | 24.75% | 32.90% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.886538993378624e-05 | 5.831885846751374e-05 | 26.05% | 35.23% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.771733533208934e-05 | 7.365189742971689e-05 | 24.63% | 32.67% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.921884475915722e-05 | 5.904395033831987e-05 | 25.47% | 34.17% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.724680892742445e-05 | 7.426134488417273e-05 | 23.64% | 30.95% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.881877362655136e-05 | 5.7818141112202985e-05 | 26.64% | 36.32% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.875588044015711e-05 | 5.801545992169513e-05 | 26.34% | 35.75% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.862213147338396e-05 | 5.805021033227663e-05 | 26.17% | 35.44% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.874067119846998e-05 | 5.80775278556335e-05 | 26.24% | 35.58% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.849952262663248e-05 | 5.7929264336979e-05 | 26.20% | 35.51% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.874256510437547e-05 | 5.795244271249508e-05 | 26.40% | 35.87% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.653169082838444e-05 | 5.595884176880695e-05 | 26.88% | 36.76% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.662239372650939e-05 | 5.602235462841437e-05 | 26.89% | 36.77% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.910145587001712e-05 | 5.780295218932765e-05 | 26.93% | 36.85% | 1.37x | ✅ |
| `hexbytes_new['']` | 7.364413108784738e-05 | 3.15796067130084e-05 | 57.12% | 133.20% | 2.33x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.30158707655131e-05 | 4.844413358179768e-05 | 47.92% | 92.01% | 1.92x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.387015129308413e-05 | 4.890805371275484e-05 | 47.90% | 91.93% | 1.92x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.904107300935074e-05 | 4.554930531926913e-05 | 48.84% | 95.48% | 1.95x | ✅ |
| `hexbytes_new['0x']` | 7.887867919103745e-05 | 3.1824412735345784e-05 | 59.65% | 147.86% | 2.48x | ✅ |
| `hexbytes_new['0x1234']` | 8.72479665002735e-05 | 4.3446098305543234e-05 | 50.20% | 100.82% | 2.01x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.717909075278654e-05 | 4.414910317137786e-05 | 49.36% | 97.47% | 1.97x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.666939815326003e-05 | 4.536796900897387e-05 | 47.65% | 91.04% | 1.91x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.69505881976454e-05 | 4.3197967330967226e-05 | 50.32% | 101.28% | 2.01x | ✅ |
| `hexbytes_new['abc']` | 8.420788025533439e-05 | 4.548191616363747e-05 | 45.99% | 85.15% | 1.85x | ✅ |
| `hexbytes_new['deadbeef']` | 7.909458429135083e-05 | 3.8981021232176436e-05 | 50.72% | 102.91% | 2.03x | ✅ |
| `hexbytes_new[0-9]` | 4.2785945076799864e-05 | 2.429751340609058e-05 | 43.21% | 76.09% | 1.76x | ✅ |
| `hexbytes_new[0]` | 0.0001266317635411518 | 3.771037490228254e-05 | 70.22% | 235.80% | 3.36x | ✅ |
| `hexbytes_new[123456]` | 0.00012962002729255802 | 3.704109502506508e-05 | 71.42% | 249.94% | 3.50x | ✅ |
| `hexbytes_new[2**16]` | 0.00013184839555375406 | 3.655426120387185e-05 | 72.28% | 260.69% | 3.61x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00012851641034057433 | 4.640462465540939e-05 | 63.89% | 176.95% | 2.77x | ✅ |
| `hexbytes_new[2**32]` | 0.00013151330148362947 | 3.98433833364776e-05 | 69.70% | 230.08% | 3.30x | ✅ |
| `hexbytes_new[2**64]` | 0.0001328376524001257 | 4.3335263802800836e-05 | 67.38% | 206.53% | 3.07x | ✅ |
| `hexbytes_new[2**8]` | 0.00013072767774474964 | 3.7795027438257293e-05 | 71.09% | 245.89% | 3.46x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.4598734813672104e-05 | 2.5799964185360067e-05 | 42.15% | 72.86% | 1.73x | ✅ |
| `hexbytes_new[False]` | 6.049495963931929e-05 | 2.554861081631853e-05 | 57.77% | 136.78% | 2.37x | ✅ |
| `hexbytes_new[True]` | 5.73303251294613e-05 | 2.5506660782337785e-05 | 55.51% | 124.77% | 2.25x | ✅ |
| `hexbytes_new[all byte values]` | 4.416072186129773e-05 | 2.5751030509232098e-05 | 41.69% | 71.49% | 1.71x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.3285052775880206e-05 | 2.4799272939515123e-05 | 42.71% | 74.54% | 1.75x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.345841045906215e-05 | 2.4792861814595398e-05 | 42.95% | 75.29% | 1.75x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.331941411626215e-05 | 2.4115819531579022e-05 | 44.33% | 79.63% | 1.80x | ✅ |
| `hexbytes_new[b'']` | 4.205058061317317e-05 | 2.506243560316316e-05 | 40.40% | 67.78% | 1.68x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.289733171798852e-05 | 2.4209619102515965e-05 | 43.56% | 77.19% | 1.77x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.243874757296291e-05 | 2.4583963877306212e-05 | 42.07% | 72.63% | 1.73x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.320019165501546e-05 | 2.545937126725712e-05 | 41.07% | 69.68% | 1.70x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.452544976565801e-05 | 3.669338446934988e-05 | 32.70% | 48.60% | 1.49x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.2464346935301605e-05 | 2.441400654221868e-05 | 42.51% | 73.93% | 1.74x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.293386376951772e-05 | 2.4550230895221525e-05 | 42.82% | 74.88% | 1.75x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.209303606541276e-05 | 2.4206338578448296e-05 | 42.49% | 73.89% | 1.74x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.225507505718316e-05 | 2.4228578596097594e-05 | 42.66% | 74.40% | 1.74x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.273644600989836e-05 | 2.4825181838109203e-05 | 41.91% | 72.15% | 1.72x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.3133185168273505e-05 | 2.4839560959088043e-05 | 42.41% | 73.65% | 1.74x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.0657319309893196e-05 | 3.1003391594605166e-05 | 38.80% | 63.39% | 1.63x | ✅ |
| `hexbytes_new[b'abc']` | 4.294881309342296e-05 | 2.445616585480021e-05 | 43.06% | 75.62% | 1.76x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.747547506753167e-05 | 3.40940436993623e-05 | 49.47% | 97.91% | 1.98x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.973239997067499e-05 | 3.575457726352393e-05 | 48.73% | 95.03% | 1.95x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.929309500078696e-05 | 3.585671060717811e-05 | 48.25% | 93.25% | 1.93x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.832610470458781e-05 | 3.500448479996363e-05 | 48.77% | 95.19% | 1.95x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.851103256158737e-05 | 3.508862619790095e-05 | 48.78% | 95.25% | 1.95x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.790510061314475e-05 | 3.482511897431474e-05 | 48.72% | 94.99% | 1.95x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.712326245302019e-05 | 3.292071574163678e-05 | 50.95% | 103.89% | 2.04x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.737999700359301e-05 | 3.4459517702092936e-05 | 48.86% | 95.53% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.858141691062008e-05 | 3.428957489907966e-05 | 50.00% | 100.01% | 2.00x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.842347372532746e-05 | 3.551839652800262e-05 | 48.09% | 92.64% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.003466331701851e-05 | 5.3196132937732874e-05 | 40.92% | 69.25% | 1.69x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.83785065949316e-05 | 3.43970740474071e-05 | 49.70% | 98.79% | 1.99x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.73021849432035e-05 | 3.453336827559975e-05 | 48.69% | 94.89% | 1.95x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.771357996090071e-05 | 3.418466574377227e-05 | 49.52% | 98.08% | 1.98x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.743635919787635e-05 | 3.381676072737169e-05 | 49.85% | 99.42% | 1.99x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.850214568255253e-05 | 3.4005327750828915e-05 | 50.36% | 101.45% | 2.01x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.928661331330901e-05 | 3.511955230360998e-05 | 49.31% | 97.29% | 1.97x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.621641352982409e-05 | 4.889025120822423e-05 | 43.29% | 76.35% | 1.76x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.799458394477501e-05 | 3.4486301435163595e-05 | 49.28% | 97.16% | 1.97x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.637328162308799e-05 | 4.9332914601309646e-05 | 42.88% | 75.08% | 1.75x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.987959766947415e-05 | 3.531563265443399e-05 | 49.46% | 97.87% | 1.98x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.800577751912239e-05 | 3.4120047516038323e-05 | 49.83% | 99.31% | 1.99x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.762593135889284e-05 | 3.439364100577915e-05 | 49.14% | 96.62% | 1.97x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.816740873420738e-05 | 3.4793381155507984e-05 | 48.96% | 95.92% | 1.96x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.820440199823239e-05 | 3.4544139146029985e-05 | 49.35% | 97.44% | 1.97x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.802692387693635e-05 | 3.623052473555603e-05 | 46.74% | 87.76% | 1.88x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.854124334660776e-05 | 3.499616592968367e-05 | 48.94% | 95.85% | 1.96x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.857910280658731e-05 | 3.517835347773565e-05 | 48.70% | 94.95% | 1.95x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.877090196549617e-05 | 3.509848518326032e-05 | 48.96% | 95.94% | 1.96x | ✅ |
| `hexbytes_new[long alternating]` | 4.975917121563631e-05 | 3.1353312876138175e-05 | 36.99% | 58.70% | 1.59x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.313630456824448e-05 | 4.235146513666709e-05 | 49.06% | 96.30% | 1.96x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.577341193613267e-05 | 4.318193013461675e-05 | 49.66% | 98.63% | 1.99x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.526112454956888e-05 | 4.275483681762486e-05 | 49.85% | 99.42% | 1.99x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.586837745487366e-05 | 4.244303490784403e-05 | 50.57% | 102.31% | 2.02x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.553840517424575e-05 | 4.296638453207052e-05 | 49.77% | 99.08% | 1.99x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.369934077576444e-05 | 4.156662952931441e-05 | 50.34% | 101.36% | 2.01x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.262740831552308e-05 | 4.089999961148013e-05 | 50.50% | 102.02% | 2.02x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.357286579845851e-05 | 4.218185870403325e-05 | 49.53% | 98.13% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.460162828854662e-05 | 4.248254599696083e-05 | 49.79% | 99.14% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.490552030276791e-05 | 4.312012699434602e-05 | 49.21% | 96.90% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010485902752072808 | 6.142797393309413e-05 | 41.42% | 70.70% | 1.71x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.450897409684336e-05 | 4.266323343510693e-05 | 49.52% | 98.08% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.413669816434267e-05 | 4.223844699008129e-05 | 49.80% | 99.19% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.365789923564665e-05 | 4.234784423481541e-05 | 49.38% | 97.55% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.43713728019564e-05 | 4.2221479345366556e-05 | 49.96% | 99.83% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.306012673630745e-05 | 4.243051848633622e-05 | 48.92% | 95.76% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.527770007911121e-05 | 4.263377960946181e-05 | 50.01% | 100.02% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 0.00010071793985475391 | 5.707938227889648e-05 | 43.33% | 76.45% | 1.76x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.364295310769692e-05 | 4.266608047279773e-05 | 48.99% | 96.04% | 1.96x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 0.00010048843082657565 | 5.5864007803117824e-05 | 44.41% | 79.88% | 1.80x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.474563564727589e-05 | 4.23491637540972e-05 | 50.03% | 100.11% | 2.00x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.472778695475341e-05 | 4.2412906111707096e-05 | 49.94% | 99.77% | 2.00x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.289066091484008e-05 | 4.2995280969019505e-05 | 48.13% | 92.79% | 1.93x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.506590469260657e-05 | 4.243138411174307e-05 | 50.12% | 100.48% | 2.00x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.434418034594325e-05 | 4.2455528392861955e-05 | 49.66% | 98.66% | 1.99x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.518022577883423e-05 | 4.250641796454491e-05 | 50.10% | 100.39% | 2.00x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.458533503889373e-05 | 4.262877501160517e-05 | 49.60% | 98.42% | 1.98x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.417437272920233e-05 | 4.283730598322557e-05 | 49.11% | 96.50% | 1.96x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.44519829950386e-05 | 4.19868368610856e-05 | 50.28% | 101.14% | 2.01x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.3836043863405135e-05 | 2.4624346239205892e-05 | 43.83% | 78.02% | 1.78x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.3106950707670436e-05 | 2.4269520408933724e-05 | 43.70% | 77.62% | 1.78x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.3187041189278766e-05 | 2.6973994001398753e-05 | 37.54% | 60.11% | 1.60x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.317605357025999e-05 | 2.480737041533017e-05 | 42.54% | 74.05% | 1.74x | ✅ |
| `hexbytes_new[palindrome]` | 4.2937470163971055e-05 | 2.4199958404543085e-05 | 43.64% | 77.43% | 1.77x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.306230699597451e-05 | 2.480609884142096e-05 | 42.39% | 73.60% | 1.74x | ✅ |
| `hexbytes_new[single 0xff]` | 4.251151090229973e-05 | 2.4850290083140025e-05 | 41.54% | 71.07% | 1.71x | ✅ |
| `hexbytes_new[single null byte]` | 4.235159226361404e-05 | 2.4859088260852505e-05 | 41.30% | 70.37% | 1.70x | ✅ |
| `hexbytes_new[two patterns]` | 4.324806103157864e-05 | 2.4947209349412934e-05 | 42.32% | 73.36% | 1.73x | ✅ |
| `hexbytes_repr[0-9]` | 3.42979700679486e-05 | 1.6182257691956293e-05 | 52.82% | 111.95% | 2.12x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012470658438424142 | 4.17578631226142e-05 | 66.52% | 198.64% | 2.99x | ✅ |
| `hexbytes_repr[all byte values]` | 0.0001244097704627098 | 4.159884113271984e-05 | 66.56% | 199.07% | 2.99x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.436562794946778e-05 | 2.1420971052432262e-05 | 60.60% | 153.80% | 2.54x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.4190866511724984e-05 | 2.1377711977147867e-05 | 60.55% | 153.49% | 2.53x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.55276992209664e-05 | 1.9298885149197598e-05 | 57.61% | 135.91% | 2.36x | ✅ |
| `hexbytes_repr[b'']` | 2.533864107795963e-05 | 1.2606660303441733e-05 | 50.25% | 100.99% | 2.01x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 4.156187905579403e-05 | 1.7997890718319357e-05 | 56.70% | 130.93% | 2.31x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 3.27928832064936e-05 | 1.5032844941520565e-05 | 54.16% | 118.14% | 2.18x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.69489844335242e-05 | 2.478298200303325e-05 | 62.98% | 170.14% | 2.70x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007698457680926933 | 0.0002264802221726294 | 70.58% | 239.92% | 3.40x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 3.165300334105432e-05 | 1.504921528138547e-05 | 52.46% | 110.33% | 2.10x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 3.29694951822914e-05 | 1.523601850688419e-05 | 53.79% | 116.39% | 2.16x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.395065602130409e-05 | 1.5892465057133922e-05 | 53.19% | 113.63% | 2.14x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.40857339641542e-05 | 1.5911479147158464e-05 | 53.32% | 114.22% | 2.14x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 3.29957609455805e-05 | 1.505897130258438e-05 | 54.36% | 119.11% | 2.19x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.418360962026223e-05 | 2.1326008054250526e-05 | 60.64% | 154.07% | 2.54x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.0004041173792249015 | 0.00012120393323615083 | 70.01% | 233.42% | 3.33x | ✅ |
| `hexbytes_repr[b'abc']` | 3.1921254403758634e-05 | 1.5150259357111256e-05 | 52.54% | 110.70% | 2.11x | ✅ |
| `hexbytes_repr[long alternating]` | 0.00040603209674661296 | 0.00012227837315510512 | 69.88% | 232.06% | 3.32x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.00010306290418468815 | 3.5704466376229176e-05 | 65.36% | 188.66% | 2.89x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.4369532288884176e-05 | 1.6261707099306674e-05 | 52.69% | 111.35% | 2.11x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.37992507408017e-05 | 1.556308663878344e-05 | 53.95% | 117.18% | 2.17x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 3.30395347247649e-05 | 1.5273226880780362e-05 | 53.77% | 116.32% | 2.16x | ✅ |
| `hexbytes_repr[palindrome]` | 3.759952859970517e-05 | 1.7037520426010747e-05 | 54.69% | 120.69% | 2.21x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.684203807979827e-05 | 2.4646173425257225e-05 | 63.13% | 171.21% | 2.71x | ✅ |
| `hexbytes_repr[single 0xff]` | 3.0704604730611265e-05 | 1.4603766335786965e-05 | 52.44% | 110.25% | 2.10x | ✅ |
| `hexbytes_repr[single null byte]` | 3.080936058158464e-05 | 1.4691205271810214e-05 | 52.32% | 109.71% | 2.10x | ✅ |
| `hexbytes_repr[two patterns]` | 5.4015361396182115e-05 | 2.1241435945857557e-05 | 60.68% | 154.29% | 2.54x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.7376024656507207e-05 | 1.558780355966031e-05 | 10.29% | 11.47% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.353665522767172e-05 | 4.098413119378438e-05 | 5.86% | 6.23% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.362107444466848e-05 | 4.090002475482303e-05 | 6.24% | 6.65% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.2602443776301136e-05 | 2.0662329736398647e-05 | 8.58% | 9.39% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.2576269211070044e-05 | 2.067027937984439e-05 | 8.44% | 9.22% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.0784569690771336e-05 | 1.880900743812672e-05 | 9.50% | 10.50% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0252564368153359e-05 | 1.230276106344783e-05 | -20.00% | -16.66% | 0.83x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.943770222481902e-05 | 1.7330750174801044e-05 | 10.84% | 12.16% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.6740497882243638e-05 | 1.4768243637545146e-05 | 11.78% | 13.35% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.6371339841120145e-05 | 2.4072983180062838e-05 | 8.72% | 9.55% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022596884639879787 | 0.00022263065336711936 | 1.48% | 1.50% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.6327167590500225e-05 | 1.4866061596255233e-05 | 8.95% | 9.83% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.7108948183610705e-05 | 1.490427833534797e-05 | 12.89% | 14.79% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.718541714213832e-05 | 1.544058949321738e-05 | 10.15% | 11.30% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.720768987291903e-05 | 1.538600174372709e-05 | 10.59% | 11.84% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.6914878884248047e-05 | 1.4768012478012838e-05 | 12.69% | 14.54% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.268726676172495e-05 | 2.0581009500214287e-05 | 9.28% | 10.23% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012507682628329036 | 0.00012210772871572637 | 2.37% | 2.43% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.6579154480206213e-05 | 1.4791512563454052e-05 | 10.78% | 12.09% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012448920823216042 | 0.00012181023847768622 | 2.15% | 2.20% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.635980769536686e-05 | 3.4574402878368244e-05 | 4.91% | 5.16% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.7355854244356617e-05 | 1.5515736461047843e-05 | 10.60% | 11.86% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.7196067343850033e-05 | 1.5232372632683342e-05 | 11.42% | 12.89% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.702606452674609e-05 | 1.4904034695529844e-05 | 12.46% | 14.24% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.8086463693147284e-05 | 1.623443213508038e-05 | 10.24% | 11.41% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.617518637188818e-05 | 2.4084464647122507e-05 | 7.99% | 8.68% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.6165668901536007e-05 | 1.4394716490510298e-05 | 10.96% | 12.30% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.6122864034648387e-05 | 1.4459506217606094e-05 | 10.32% | 11.50% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.2792204668773755e-05 | 2.0439096552282434e-05 | 10.32% | 11.51% | 1.12x | ✅ |
