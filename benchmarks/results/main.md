#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.6798351550226907e-05 | 2.5453375476411155e-05 | 5.02% | 5.28% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.6744813669007476e-05 | 2.533118545113992e-05 | 5.29% | 5.58% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.6900388530505085e-05 | 2.5753347858860832e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.647358091403694e-05 | 2.5676081745793202e-05 | 3.01% | 3.11% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.675121581773165e-05 | 2.559512086630296e-05 | 4.32% | 4.52% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.666985156141827e-05 | 2.5586333174238187e-05 | 4.06% | 4.23% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.6871848023009017e-05 | 2.5265751217753764e-05 | 5.98% | 6.36% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.689085641594317e-05 | 2.5525156751918575e-05 | 5.08% | 5.35% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.6818820722668527e-05 | 2.559111621771498e-05 | 4.58% | 4.80% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.6760052451987013e-05 | 2.5470613870676996e-05 | 4.82% | 5.06% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.684760161654526e-05 | 2.521869651643661e-05 | 6.07% | 6.46% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.667214478034377e-05 | 2.5641177425047016e-05 | 3.87% | 4.02% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.6845336360888345e-05 | 2.5961499326676514e-05 | 3.29% | 3.40% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.6895368038602848e-05 | 2.5588874704812135e-05 | 4.86% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.6864529697955826e-05 | 2.5489644290251443e-05 | 5.12% | 5.39% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.6885424491390746e-05 | 2.5382354673307076e-05 | 5.59% | 5.92% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.695798947632103e-05 | 2.52625890272914e-05 | 6.29% | 6.71% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.6842002793271492e-05 | 2.56556788690716e-05 | 4.42% | 4.62% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.6730108051594676e-05 | 2.5330662819974555e-05 | 5.24% | 5.52% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.6650616328345802e-05 | 2.556181423660071e-05 | 4.09% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.689780548895355e-05 | 2.572705853337371e-05 | 4.35% | 4.55% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.6722483780591473e-05 | 2.5820116523541613e-05 | 3.38% | 3.49% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.6645118124945047e-05 | 2.5557048669650066e-05 | 4.08% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.6743369278578498e-05 | 2.5591980487350134e-05 | 4.31% | 4.50% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.6809944111778953e-05 | 2.5947701153077636e-05 | 3.22% | 3.32% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.664952887252756e-05 | 2.56669482607243e-05 | 3.69% | 3.83% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.607715201244316e-05 | 2.458311382916699e-05 | 5.73% | 6.08% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.597927477260986e-05 | 2.4211443487631953e-05 | 6.80% | 7.30% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.609560744680122e-05 | 2.4640442254895873e-05 | 5.58% | 5.91% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.6178687212368844e-05 | 2.4348287186120596e-05 | 6.99% | 7.52% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.6201880293138705e-05 | 2.477088658653085e-05 | 5.46% | 5.78% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.6084063235333683e-05 | 2.523356768100245e-05 | 3.26% | 3.37% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.5921108070792313e-05 | 2.4140079517401862e-05 | 6.87% | 7.38% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.5657939768418424e-05 | 2.4408983397146186e-05 | 4.87% | 5.12% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.6097805671288274e-05 | 2.514418229042788e-05 | 3.65% | 3.79% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.6135567742506263e-05 | 2.5201654502799178e-05 | 3.57% | 3.71% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.5983086531502014e-05 | 2.4893810272382116e-05 | 4.19% | 4.38% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.616370129811035e-05 | 2.504493439968515e-05 | 4.28% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.538019688098212e-05 | 2.5024430327028978e-05 | 1.40% | 1.42% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.6034439755957924e-05 | 2.4798468113847302e-05 | 4.75% | 4.98% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.6151832523262016e-05 | 2.489581583606143e-05 | 4.80% | 5.05% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.604604048359207e-05 | 2.4853829512019052e-05 | 4.58% | 4.80% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.6032761234795513e-05 | 2.4898807361130436e-05 | 4.36% | 4.55% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.5929071329789906e-05 | 2.4967137792238492e-05 | 3.71% | 3.85% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.6273922268199816e-05 | 2.40483846612208e-05 | 8.47% | 9.25% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.599201477885812e-05 | 2.5106702496395355e-05 | 3.41% | 3.53% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.6032224742078884e-05 | 2.4482055454046944e-05 | 5.95% | 6.33% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.6104875612563507e-05 | 2.5331816488508306e-05 | 2.96% | 3.05% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.668054229606527e-05 | 2.5254828339916413e-05 | 5.34% | 5.65% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.587975169548227e-05 | 2.501557744594057e-05 | 3.34% | 3.45% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.5904150362449838e-05 | 2.4662210028154027e-05 | 4.79% | 5.04% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.60942614925836e-05 | 2.5118585822708285e-05 | 3.74% | 3.88% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.6186145824132042e-05 | 2.4503452501047993e-05 | 6.43% | 6.87% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.5942229382934474e-05 | 2.4299760061197474e-05 | 6.33% | 6.76% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.617507850952517e-05 | 2.5142194019683194e-05 | 3.95% | 4.11% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.6046526607609926e-05 | 2.517762616906121e-05 | 3.34% | 3.45% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.5968297647786402e-05 | 2.4984060980659365e-05 | 3.79% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.616721365637571e-05 | 2.5097094320894862e-05 | 4.09% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.610476719802182e-05 | 2.5248505222822507e-05 | 3.28% | 3.39% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.614615084462808e-05 | 2.4841812451877633e-05 | 4.99% | 5.25% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.5994456605729306e-05 | 2.453859196590531e-05 | 5.60% | 5.93% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.6488482592626225e-05 | 2.5070454056209378e-05 | 5.35% | 5.66% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.6178895611970927e-05 | 2.521605217580502e-05 | 3.68% | 3.82% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.6069402009061342e-05 | 2.5016822751655446e-05 | 4.04% | 4.21% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.6058191564696818e-05 | 2.549736586779731e-05 | 2.15% | 2.20% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6234731155313848e-05 | 2.5108732038845866e-05 | 4.29% | 4.48% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.610153399271216e-05 | 2.517516835090898e-05 | 3.55% | 3.68% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.61939636129444e-05 | 2.5234073973118408e-05 | 3.66% | 3.80% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.6119744630556924e-05 | 2.520338223452729e-05 | 3.51% | 3.64% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.5926618864012823e-05 | 2.5162499223194814e-05 | 2.95% | 3.04% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.606179302593773e-05 | 2.5109115192773475e-05 | 3.66% | 3.79% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.602259569245531e-05 | 2.515983385365584e-05 | 3.32% | 3.43% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.6176912051589375e-05 | 2.5063860207814387e-05 | 4.25% | 4.44% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.595733420678199e-05 | 2.509611639579322e-05 | 3.32% | 3.43% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.6188141306308686e-05 | 2.5088291593902393e-05 | 4.20% | 4.38% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.6006817618633308e-05 | 2.509572965792915e-05 | 3.50% | 3.63% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.605735937277933e-05 | 2.468699969132322e-05 | 5.26% | 5.55% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.551398214709696e-05 | 2.5107626417093048e-05 | 1.59% | 1.62% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.5977458016006475e-05 | 2.4804533304262708e-05 | 4.52% | 4.73% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.5935239863342792e-05 | 2.4931444238860923e-05 | 3.87% | 4.03% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.5927696319201044e-05 | 2.5260617059131963e-05 | 2.57% | 2.64% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.6051054177445816e-05 | 2.518726560915639e-05 | 3.32% | 3.43% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.586320740446421e-05 | 2.525650932285617e-05 | 2.35% | 2.40% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.5907124120222104e-05 | 2.470946902147428e-05 | 4.62% | 4.85% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.5734586188036094e-05 | 2.5116805384814634e-05 | 2.40% | 2.46% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.580576139968903e-05 | 2.5147860471118134e-05 | 2.55% | 2.62% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.5993301509001105e-05 | 2.425659359941721e-05 | 6.68% | 7.16% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.5927420373503186e-05 | 2.4640612590963454e-05 | 4.96% | 5.22% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.5890158542153457e-05 | 2.490213609762354e-05 | 3.82% | 3.97% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.604265380874619e-05 | 2.512155572962578e-05 | 3.54% | 3.67% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.5796692689991888e-05 | 2.5093730229143438e-05 | 2.73% | 2.80% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.5945347822462028e-05 | 2.5129639852902263e-05 | 3.14% | 3.25% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.6029309223643467e-05 | 2.4857925196905612e-05 | 4.50% | 4.71% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.592188875093726e-05 | 2.4976087853384472e-05 | 3.65% | 3.79% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.5702576996937743e-05 | 2.5157464696699445e-05 | 2.12% | 2.17% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.5893157649809027e-05 | 2.5012450506191363e-05 | 3.40% | 3.52% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.6067922759611502e-05 | 2.509694175461195e-05 | 3.72% | 3.87% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.597349908702277e-05 | 2.4959911114837676e-05 | 3.90% | 4.06% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.5982537548600785e-05 | 2.4529892870731955e-05 | 5.59% | 5.92% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.592774614816608e-05 | 2.525554038423133e-05 | 2.59% | 2.66% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.59813543774344e-05 | 2.486445639177735e-05 | 4.30% | 4.49% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.6096575987151833e-05 | 2.516023213632526e-05 | 3.59% | 3.72% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.6029420823603884e-05 | 2.519129705185456e-05 | 3.22% | 3.33% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.5959071327142956e-05 | 2.515204574954961e-05 | 3.11% | 3.21% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.594030629363392e-05 | 2.5097082804603964e-05 | 3.25% | 3.36% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.5803934896782203e-05 | 2.4486043446284797e-05 | 5.11% | 5.38% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.6112808269990133e-05 | 2.5230425446196462e-05 | 3.38% | 3.50% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.6224049691366244e-05 | 2.525849239639259e-05 | 3.68% | 3.82% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.6112578823927855e-05 | 2.526585465869294e-05 | 3.24% | 3.35% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.6006080683070344e-05 | 2.5318019259074682e-05 | 2.65% | 2.72% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.6082018289105055e-05 | 2.5281286620257073e-05 | 3.07% | 3.17% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.6042325507659288e-05 | 2.5101230177993035e-05 | 3.61% | 3.75% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.5993547434328087e-05 | 2.476840320015612e-05 | 4.71% | 4.95% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.6450410817371667e-05 | 2.5318435715662508e-05 | 4.28% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.594854439761465e-05 | 2.5290024191741726e-05 | 2.54% | 2.60% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.617676070541716e-05 | 2.5185652036247918e-05 | 3.79% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.606672047323571e-05 | 2.5210763779659857e-05 | 3.28% | 3.40% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.5990550470087797e-05 | 2.5233588448260006e-05 | 2.91% | 3.00% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.6152194871640996e-05 | 2.5138931650762395e-05 | 3.87% | 4.03% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.6185893344077774e-05 | 2.5278947661308967e-05 | 3.46% | 3.59% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.5890856970536476e-05 | 2.5088931145460807e-05 | 3.10% | 3.20% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.5856038321616335e-05 | 2.5029338100821815e-05 | 3.20% | 3.30% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.6266992963808046e-05 | 2.5154936227122104e-05 | 4.23% | 4.42% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.6184680152547736e-05 | 2.5017384766512103e-05 | 4.46% | 4.67% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.614946328953338e-05 | 2.516596873498497e-05 | 3.76% | 3.91% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.6219658840897885e-05 | 2.516763730552337e-05 | 4.01% | 4.18% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.6956238801439642e-05 | 2.4847015048515654e-05 | 7.82% | 8.49% | 1.08x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.6183136277017296e-05 | 2.5267969639392766e-05 | 3.50% | 3.62% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.6195272963449287e-05 | 2.5217522805504156e-05 | 3.73% | 3.88% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.5918484749575104e-05 | 2.5041288377644833e-05 | 3.38% | 3.50% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.6104955140745287e-05 | 2.5015414141461315e-05 | 4.17% | 4.36% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.6043984626180412e-05 | 2.452120002129767e-05 | 5.85% | 6.21% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.615959863835742e-05 | 2.5012212308534167e-05 | 4.39% | 4.59% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.6014915502923212e-05 | 2.4603809500052332e-05 | 5.42% | 5.74% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.6189297948975374e-05 | 2.5118463915404558e-05 | 4.09% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.6013062877766192e-05 | 2.4915204035545317e-05 | 4.22% | 4.41% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.6075165651123932e-05 | 2.4643068903376753e-05 | 5.49% | 5.81% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.6168017861621474e-05 | 2.5007779407060023e-05 | 4.43% | 4.64% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.6055897286668436e-05 | 2.4998075154427288e-05 | 4.06% | 4.23% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.5549026207045146e-05 | 2.5077625341138505e-05 | 1.85% | 1.88% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.6201458362465176e-05 | 2.497546146779118e-05 | 4.68% | 4.91% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.606492429942376e-05 | 2.495427963460668e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.62310654495257e-05 | 2.5164397573779516e-05 | 4.07% | 4.24% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.5481896109029908e-05 | 2.547883567615631e-05 | 0.01% | 0.01% | 1.00x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.6042245535611614e-05 | 2.4558853419596013e-05 | 5.70% | 6.04% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.5944128100711412e-05 | 2.468934823875184e-05 | 4.84% | 5.08% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.609143743338767e-05 | 2.504189257720477e-05 | 4.02% | 4.19% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.601851672171675e-05 | 2.509782804742188e-05 | 3.54% | 3.67% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.6061268637152843e-05 | 2.5004439691693773e-05 | 4.06% | 4.23% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.6260746941267253e-05 | 2.5023076511225355e-05 | 4.71% | 4.95% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.597944300386749e-05 | 2.498726486395776e-05 | 3.82% | 3.97% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.6165843259911417e-05 | 2.442417651411561e-05 | 6.66% | 7.13% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.562818361097118e-05 | 2.4889523108174546e-05 | 2.88% | 2.97% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.61862455572761e-05 | 2.494174102453945e-05 | 4.75% | 4.99% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.6232513824019393e-05 | 2.5247357042248954e-05 | 3.76% | 3.90% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.6047861888717158e-05 | 2.4981187500214435e-05 | 4.10% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.5950299455174654e-05 | 2.5011335089240475e-05 | 3.62% | 3.75% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.6650788781821445e-05 | 2.5117081844844077e-05 | 5.75% | 6.11% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.5972795151245908e-05 | 2.4335884515204837e-05 | 6.30% | 6.73% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.598235216913753e-05 | 2.4956790480477634e-05 | 3.95% | 4.11% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.6406657891421036e-05 | 2.497736165162443e-05 | 5.41% | 5.72% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.5794507147853586e-05 | 2.499593181175365e-05 | 3.10% | 3.19% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.6001762401757266e-05 | 2.5070217428512402e-05 | 3.58% | 3.72% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.6003371101090607e-05 | 2.497217948525864e-05 | 3.97% | 4.13% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.5808385751694003e-05 | 2.4966259725360957e-05 | 3.26% | 3.37% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.6132124189373076e-05 | 2.5253639783603815e-05 | 3.36% | 3.48% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.6106582835845244e-05 | 2.4968899570077624e-05 | 4.36% | 4.56% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.5968812707430707e-05 | 2.5222788993779707e-05 | 2.87% | 2.96% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.6224119167038296e-05 | 2.4956392926130637e-05 | 4.83% | 5.08% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.6039026076374095e-05 | 2.496841836453452e-05 | 4.11% | 4.29% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.6078018283451986e-05 | 2.520304118207283e-05 | 3.36% | 3.47% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.5565737752950195e-05 | 2.5237321573279238e-05 | 1.28% | 1.30% | 1.01x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.117914454512843e-05 | 5.8596621176756435e-05 | 27.82% | 38.54% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.15008694564813e-05 | 5.940400395486576e-05 | 27.11% | 37.20% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.05832471642792e-05 | 5.9603516431077323e-05 | 26.03% | 35.20% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.184635703488495e-05 | 5.92248908745053e-05 | 27.64% | 38.20% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.179690826518678e-05 | 5.918201211743494e-05 | 27.65% | 38.21% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.197610144204636e-05 | 5.8629686375679414e-05 | 28.48% | 39.82% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.803682839575792e-05 | 5.749062037240287e-05 | 26.33% | 35.74% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.018380744366879e-05 | 5.9092417731266376e-05 | 26.30% | 35.69% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.173540051452835e-05 | 5.958834428537603e-05 | 27.10% | 37.17% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.11345543834454e-05 | 5.887637277610507e-05 | 27.43% | 37.80% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.16039248465233e-05 | 5.8814493757484385e-05 | 27.93% | 38.75% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.11030851995476e-05 | 5.9082463735071706e-05 | 27.15% | 37.27% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.137994257580874e-05 | 5.930252577570255e-05 | 27.13% | 37.23% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.167696085496571e-05 | 6.0022462900123345e-05 | 26.51% | 36.08% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.122219335431603e-05 | 5.8658705740591075e-05 | 27.78% | 38.47% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.062173061492243e-05 | 5.8730207568065046e-05 | 27.15% | 37.27% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.041904449109069e-05 | 5.91526143272286e-05 | 26.44% | 35.95% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.332757809280043e-05 | 5.924086940478887e-05 | 28.91% | 40.66% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.147130621254782e-05 | 5.931558965795456e-05 | 27.19% | 37.35% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.15036773327639e-05 | 5.992841404711151e-05 | 26.47% | 36.00% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.155268219193839e-05 | 5.950363730517999e-05 | 27.04% | 37.05% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.154627454940107e-05 | 5.8675436165403426e-05 | 28.05% | 38.98% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.195807158398477e-05 | 5.951534647815129e-05 | 27.38% | 37.71% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.13438942371912e-05 | 5.9512064800856164e-05 | 26.84% | 36.68% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.135947155546161e-05 | 5.821074071703325e-05 | 28.45% | 39.77% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.142346971360884e-05 | 5.9110936094702283e-05 | 27.40% | 37.75% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.840198800347525e-05 | 5.725229709099454e-05 | 26.98% | 36.94% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.866112256650648e-05 | 5.7683550986927446e-05 | 26.67% | 36.37% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.132018558097554e-05 | 5.8955820518681476e-05 | 27.50% | 37.93% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.162214086414612e-05 | 6.139993384417338e-05 | 24.78% | 32.94% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.209247983721839e-05 | 6.083612854325813e-05 | 25.89% | 34.94% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.267989574158222e-05 | 5.9997305813989104e-05 | 27.43% | 37.81% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.241840721443751e-05 | 6.054495969862957e-05 | 26.54% | 36.13% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 7.93430218886995e-05 | 6.080029063438797e-05 | 23.37% | 30.50% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.354455388997968e-05 | 6.0537691735531214e-05 | 27.54% | 38.00% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.910010172438911e-05 | 5.839557450152311e-05 | 26.18% | 35.46% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.253672487247297e-05 | 6.034001213907598e-05 | 26.89% | 36.79% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.227628698051468e-05 | 6.066897910909609e-05 | 26.26% | 35.62% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.014824514843009e-05 | 6.058823400147457e-05 | 24.40% | 32.28% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.149777681838851e-05 | 6.114714215118839e-05 | 24.97% | 33.28% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.262658842048961e-05 | 5.976168414852813e-05 | 27.67% | 38.26% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.25592725106476e-05 | 6.0995015701900956e-05 | 26.12% | 35.35% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.209229195531583e-05 | 5.9949873282841316e-05 | 26.97% | 36.93% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.209242707697098e-05 | 6.102900549547648e-05 | 25.66% | 34.51% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.30401695468996e-05 | 5.962340751225168e-05 | 28.20% | 39.27% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.263587396421335e-05 | 6.066538647903557e-05 | 26.59% | 36.22% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.1751818685056e-05 | 5.942380610493508e-05 | 27.31% | 37.57% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.279660629546579e-05 | 6.069869811960189e-05 | 26.69% | 36.41% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.298803526159922e-05 | 6.110268173691112e-05 | 26.37% | 35.82% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.253881103609302e-05 | 6.102905340669825e-05 | 26.06% | 35.25% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.25319095549639e-05 | 5.9888068988949055e-05 | 27.44% | 37.81% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.19475857341438e-05 | 6.093040735934659e-05 | 25.65% | 34.49% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.26680825210574e-05 | 6.060000658867672e-05 | 26.69% | 36.42% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.211254638566871e-05 | 5.8782998862597514e-05 | 28.41% | 39.69% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.114448412293253e-05 | 6.038349152373404e-05 | 25.59% | 34.38% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.878070151224493e-05 | 5.8907959979722075e-05 | 25.23% | 33.74% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.903384429174737e-05 | 5.835031619361304e-05 | 26.17% | 35.45% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.366412851843376e-05 | 6.092327405416634e-05 | 27.18% | 37.33% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.128361722759195e-05 | 6.06031862359332e-05 | 25.44% | 34.12% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.132537792837733e-05 | 5.9603651645390174e-05 | 26.71% | 36.44% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.240237231452123e-05 | 5.992299582581291e-05 | 27.28% | 37.51% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.254738125181336e-05 | 6.01048472535442e-05 | 27.19% | 37.34% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.190881155811544e-05 | 5.999454313899406e-05 | 26.75% | 36.53% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.144688609324666e-05 | 5.963572125460723e-05 | 26.78% | 36.57% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.925515744036577e-05 | 5.7572204450657654e-05 | 27.36% | 37.66% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.138745612800388e-05 | 5.9458798885177804e-05 | 26.94% | 36.88% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.223672407641358e-05 | 5.950383401786228e-05 | 27.64% | 38.20% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.152083872897321e-05 | 6.0095961825090595e-05 | 26.28% | 35.65% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.263271117566936e-05 | 5.890703854074281e-05 | 28.71% | 40.28% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.065374626937595e-05 | 6.0303434259851964e-05 | 25.23% | 33.75% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.044853498685592e-05 | 6.040116093521215e-05 | 24.92% | 33.19% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.209903765487585e-05 | 5.967338039335953e-05 | 27.32% | 37.58% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.239763463378577e-05 | 6.034049655135189e-05 | 26.77% | 36.55% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.20028707742257e-05 | 5.983655206419125e-05 | 27.03% | 37.04% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.220643634576894e-05 | 6.12602287718569e-05 | 25.48% | 34.19% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.265415885258278e-05 | 6.071124357130558e-05 | 26.55% | 36.14% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.08565101881861e-05 | 5.980258650448424e-05 | 26.04% | 35.21% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.208351928848113e-05 | 5.963291294822465e-05 | 27.35% | 37.65% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.183681578139625e-05 | 5.961453715523417e-05 | 27.15% | 37.28% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.304937125472005e-05 | 5.926993358370887e-05 | 28.63% | 40.12% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.227077982090366e-05 | 6.036099060015749e-05 | 26.63% | 36.30% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.1850337049832e-05 | 6.0043337756273715e-05 | 26.64% | 36.32% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.105338596099409e-05 | 5.988107759518977e-05 | 26.12% | 35.36% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.183403659807876e-05 | 6.042598863577662e-05 | 26.16% | 35.43% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.869614373977386e-05 | 5.79739801088085e-05 | 26.33% | 35.74% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 7.890124711438047e-05 | 5.815911990286296e-05 | 26.29% | 35.66% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.180206969118707e-05 | 5.920836968793959e-05 | 27.62% | 38.16% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.007985061619069e-05 | 5.955551532080595e-05 | 25.63% | 34.46% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.132731489220797e-05 | 5.825071754798851e-05 | 28.37% | 39.62% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.192971411522691e-05 | 5.9929525811017775e-05 | 26.85% | 36.71% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.237737082973937e-05 | 5.8008981635766844e-05 | 29.58% | 42.01% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.2174218010995e-05 | 5.836079387435607e-05 | 28.98% | 40.80% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.60286000331938e-05 | 5.9191547922155384e-05 | 31.20% | 45.34% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.812602673732933e-05 | 5.7898937321071474e-05 | 25.89% | 34.94% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.090563160542646e-05 | 5.8992265187556376e-05 | 27.09% | 37.15% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.066807657242056e-05 | 5.8806268487614024e-05 | 27.10% | 37.18% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.298339795542576e-05 | 5.903205231606498e-05 | 28.86% | 40.57% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010333385726510596 | 8.118489786113063e-05 | 21.43% | 27.28% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.713753995674988e-05 | 5.763637249572596e-05 | 25.28% | 33.83% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.159705569019928e-05 | 5.9196208675971556e-05 | 27.45% | 37.84% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.043371220918084e-05 | 5.922574719182721e-05 | 26.37% | 35.81% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.119733467259034e-05 | 5.848064453324199e-05 | 27.98% | 38.84% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.049849823775223e-05 | 5.907361959678001e-05 | 26.62% | 36.27% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.102230492007909e-05 | 5.9122874023600796e-05 | 27.03% | 37.04% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.918214978926765e-05 | 7.2708499479385e-05 | 26.69% | 36.41% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.815841048317042e-05 | 5.728125966770278e-05 | 26.71% | 36.45% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.78402451363357e-05 | 7.346318496044347e-05 | 24.92% | 33.18% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.137015365719942e-05 | 5.8781627583086294e-05 | 27.76% | 38.43% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.046859271001265e-05 | 5.856905306295645e-05 | 27.22% | 37.39% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.123191314952906e-05 | 5.9408815200332474e-05 | 26.87% | 36.73% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.079410162137653e-05 | 5.97274912897496e-05 | 26.07% | 35.27% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.203624030218714e-05 | 5.814007649738741e-05 | 29.13% | 41.10% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.248748694951737e-05 | 5.887401926840899e-05 | 28.63% | 40.11% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.822147249382081e-05 | 5.7839104346803895e-05 | 26.06% | 35.24% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.795367363489338e-05 | 5.860429550343175e-05 | 24.82% | 33.02% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.326003617726928e-05 | 5.901402601088777e-05 | 29.12% | 41.09% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.880589680007236e-05 | 5.789488064350006e-05 | 26.53% | 36.12% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.117531416802121e-05 | 5.8721526331701214e-05 | 27.66% | 38.24% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.060780388848307e-05 | 5.8087120291486625e-05 | 27.94% | 38.77% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.859479554192925e-05 | 5.6916143594438066e-05 | 27.58% | 38.09% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.931809483412326e-05 | 5.675060462218798e-05 | 28.45% | 39.77% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.824448203375737e-05 | 5.7743741602590975e-05 | 26.20% | 35.50% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.480373609052028e-05 | 5.575704498936155e-05 | 25.46% | 34.16% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.78634810511374e-05 | 5.985730043493904e-05 | 23.13% | 30.08% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.996863241175619e-05 | 5.769878486691922e-05 | 27.85% | 38.60% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.831365856919795e-05 | 5.776020099784671e-05 | 26.25% | 35.58% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 9.939466358465124e-05 | 7.778470132648765e-05 | 21.74% | 27.78% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.05062905147081e-05 | 5.777362796462801e-05 | 28.24% | 39.35% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.834141327916336e-05 | 5.74297058827571e-05 | 26.69% | 36.41% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.804502865277713e-05 | 5.743659940430854e-05 | 26.41% | 35.88% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.688349381187895e-05 | 5.725887862467241e-05 | 25.53% | 34.27% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.847789616501443e-05 | 5.713630829107566e-05 | 27.19% | 37.35% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.78678357820499e-05 | 5.727131982308266e-05 | 26.45% | 35.96% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.63976053447634e-05 | 7.168569205909875e-05 | 25.64% | 34.47% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.964514527666385e-05 | 5.7418195857084394e-05 | 27.91% | 38.71% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.527702066691218e-05 | 7.210258496100037e-05 | 24.32% | 32.14% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.999988544186806e-05 | 5.7434452680479764e-05 | 28.21% | 39.29% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.878484210966665e-05 | 5.767804120849174e-05 | 26.79% | 36.59% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.934662783099315e-05 | 5.7462829237392755e-05 | 27.58% | 38.08% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.83533771057558e-05 | 6.034049684151704e-05 | 22.99% | 29.85% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.818101659720549e-05 | 5.7571774307064445e-05 | 26.36% | 35.80% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.944420478899869e-05 | 5.737913931411536e-05 | 27.77% | 38.45% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.663040745801545e-05 | 5.6064731148575e-05 | 26.84% | 36.68% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.650848429841713e-05 | 5.5845558131987755e-05 | 27.01% | 37.00% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.91402307943816e-05 | 5.798659971161252e-05 | 26.73% | 36.48% | 1.36x | ✅ |
| `hexbytes_new['']` | 7.214649521688453e-05 | 3.510286757937692e-05 | 51.35% | 105.53% | 2.06x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 8.984542035740945e-05 | 4.7926670275064044e-05 | 46.66% | 87.46% | 1.87x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.088482251130624e-05 | 5.037293067961542e-05 | 44.57% | 80.42% | 1.80x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.744952409142856e-05 | 4.42423080686868e-05 | 49.41% | 97.66% | 1.98x | ✅ |
| `hexbytes_new['0x']` | 7.697909292101417e-05 | 3.593619012704395e-05 | 53.32% | 114.21% | 2.14x | ✅ |
| `hexbytes_new['0x1234']` | 8.445641110056808e-05 | 4.263063074276912e-05 | 49.52% | 98.11% | 1.98x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.507610280105723e-05 | 4.411186415947557e-05 | 48.15% | 92.86% | 1.93x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.512734300436432e-05 | 4.256777157274801e-05 | 50.00% | 99.98% | 2.00x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.412285267205839e-05 | 4.179662803236524e-05 | 50.31% | 101.27% | 2.01x | ✅ |
| `hexbytes_new['abc']` | 8.282203323914458e-05 | 4.548655334705505e-05 | 45.08% | 82.08% | 1.82x | ✅ |
| `hexbytes_new['deadbeef']` | 7.621119512172465e-05 | 3.96084174341336e-05 | 48.03% | 92.41% | 1.92x | ✅ |
| `hexbytes_new[0-9]` | 4.236658277244601e-05 | 2.368882412774309e-05 | 44.09% | 78.85% | 1.79x | ✅ |
| `hexbytes_new[0]` | 0.0001227721467000965 | 6.66617036372596e-05 | 45.70% | 84.17% | 1.84x | ✅ |
| `hexbytes_new[123456]` | 0.00012793930670705934 | 6.998329689374507e-05 | 45.30% | 82.81% | 1.83x | ✅ |
| `hexbytes_new[2**16]` | 0.00012747269284494038 | 6.944900113368765e-05 | 45.52% | 83.55% | 1.84x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013067260477283806 | 7.564604699059428e-05 | 42.11% | 72.74% | 1.73x | ✅ |
| `hexbytes_new[2**32]` | 0.00012908098461358034 | 7.283274526296162e-05 | 43.58% | 77.23% | 1.77x | ✅ |
| `hexbytes_new[2**64]` | 0.00013206971106864227 | 7.600431455173142e-05 | 42.45% | 73.77% | 1.74x | ✅ |
| `hexbytes_new[2**8]` | 0.00012717048761983914 | 6.950326095680024e-05 | 45.35% | 82.97% | 1.83x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.4504107628607164e-05 | 2.523432315838677e-05 | 43.30% | 76.36% | 1.76x | ✅ |
| `hexbytes_new[False]` | 5.9897150717608186e-05 | 2.552821464579429e-05 | 57.38% | 134.63% | 2.35x | ✅ |
| `hexbytes_new[True]` | 6.1022038925992895e-05 | 2.5533861952187113e-05 | 58.16% | 138.98% | 2.39x | ✅ |
| `hexbytes_new[all byte values]` | 4.471631088898473e-05 | 2.524914427280836e-05 | 43.53% | 77.10% | 1.77x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.2261045325400606e-05 | 2.4592618420336083e-05 | 41.81% | 71.84% | 1.72x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.305881353410042e-05 | 2.4447978728652724e-05 | 43.22% | 76.12% | 1.76x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.263986686706629e-05 | 2.3657849312599484e-05 | 44.52% | 80.24% | 1.80x | ✅ |
| `hexbytes_new[b'']` | 4.271546606798882e-05 | 2.4220295055354296e-05 | 43.30% | 76.36% | 1.76x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.2973182063451795e-05 | 2.381958631433945e-05 | 44.57% | 80.41% | 1.80x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.281412320960067e-05 | 2.655979093869996e-05 | 37.96% | 61.20% | 1.61x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.298083970699341e-05 | 2.4579653538962608e-05 | 42.81% | 74.86% | 1.75x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.4348492904324095e-05 | 3.621665233310419e-05 | 33.36% | 50.06% | 1.50x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.389985562731234e-05 | 2.4252439319113644e-05 | 44.76% | 81.01% | 1.81x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.300408752036556e-05 | 2.4070692777163532e-05 | 44.03% | 78.66% | 1.79x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.1747799195879836e-05 | 2.393660996105142e-05 | 42.66% | 74.41% | 1.74x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.284478031825126e-05 | 2.3587548448654703e-05 | 44.95% | 81.64% | 1.82x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.269388863343578e-05 | 2.413732941431558e-05 | 43.46% | 76.88% | 1.77x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.3869593976090206e-05 | 2.464341422264121e-05 | 43.83% | 78.02% | 1.78x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.012452739752853e-05 | 3.196482524841483e-05 | 36.23% | 56.81% | 1.57x | ✅ |
| `hexbytes_new[b'abc']` | 4.385809319570791e-05 | 2.392576501251502e-05 | 45.45% | 83.31% | 1.83x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.750069501344208e-05 | 3.5156813783460256e-05 | 47.92% | 92.00% | 1.92x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.84892257804873e-05 | 3.6807708343004174e-05 | 46.26% | 86.07% | 1.86x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.852202615860257e-05 | 3.653644523869777e-05 | 46.68% | 87.54% | 1.88x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.742686594666312e-05 | 3.5547110837662755e-05 | 47.28% | 89.68% | 1.90x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.71440053321397e-05 | 3.532453173679183e-05 | 47.39% | 90.08% | 1.90x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.72827443205443e-05 | 3.4601248703678945e-05 | 48.57% | 94.45% | 1.94x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.60510909780669e-05 | 3.3300316749370354e-05 | 49.58% | 98.35% | 1.98x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.760481511305664e-05 | 3.543109758637685e-05 | 47.59% | 90.81% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.708987706803903e-05 | 3.518388730161937e-05 | 47.56% | 90.68% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.873619711477875e-05 | 3.563967703137477e-05 | 48.15% | 92.86% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 8.96102010876003e-05 | 5.2496908320639745e-05 | 41.42% | 70.70% | 1.71x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.756544997164878e-05 | 3.451003378104165e-05 | 48.92% | 95.78% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.706613510458621e-05 | 3.46333196374812e-05 | 48.36% | 93.65% | 1.94x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.659232325891743e-05 | 3.489315171705043e-05 | 47.60% | 90.85% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.663589592589273e-05 | 3.488874152155649e-05 | 47.64% | 91.00% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.660533309669255e-05 | 3.401791150304889e-05 | 48.93% | 95.79% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.736603768053e-05 | 3.592239079309147e-05 | 46.68% | 87.53% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.357214522444897e-05 | 4.699968379095466e-05 | 43.76% | 77.81% | 1.78x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.734283416372779e-05 | 3.5381845699435305e-05 | 47.46% | 90.33% | 1.90x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.32060900385913e-05 | 4.735173423977734e-05 | 43.09% | 75.72% | 1.76x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.786398992129595e-05 | 3.561765992426433e-05 | 47.52% | 90.53% | 1.91x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.720305924643163e-05 | 3.513400243379674e-05 | 47.72% | 91.28% | 1.91x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.55804978991646e-05 | 3.490345914319234e-05 | 46.78% | 87.89% | 1.88x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.690455051184024e-05 | 3.532598512718789e-05 | 47.20% | 89.39% | 1.89x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.700227577285473e-05 | 3.4971023013646986e-05 | 47.81% | 91.59% | 1.92x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.878211512611927e-05 | 3.552350111584425e-05 | 48.35% | 93.62% | 1.94x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.746759027218989e-05 | 3.609804571919075e-05 | 46.50% | 86.90% | 1.87x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.711201451623696e-05 | 3.626028392006357e-05 | 45.97% | 85.08% | 1.85x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.804678300250168e-05 | 3.545410772054358e-05 | 47.90% | 91.93% | 1.92x | ✅ |
| `hexbytes_new[long alternating]` | 4.993185014808293e-05 | 3.1704244008600536e-05 | 36.50% | 57.49% | 1.57x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.400091936639185e-05 | 4.12191284466674e-05 | 50.93% | 103.79% | 2.04x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.462790638091832e-05 | 4.48076784704879e-05 | 47.05% | 88.87% | 1.89x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.42589776673814e-05 | 4.5005253996975206e-05 | 46.59% | 87.22% | 1.87x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.333135251738078e-05 | 4.242462775576951e-05 | 49.09% | 96.42% | 1.96x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.434697187408283e-05 | 4.223640881675163e-05 | 49.93% | 99.70% | 2.00x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.216703697372743e-05 | 4.2723819075954194e-05 | 48.00% | 92.32% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.227275664541416e-05 | 4.110046662185606e-05 | 50.04% | 100.17% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.35032308546806e-05 | 4.088609971937285e-05 | 51.04% | 104.23% | 2.04x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.230830775940008e-05 | 4.194694173578647e-05 | 49.04% | 96.22% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.426981962897561e-05 | 4.2967680463146927e-05 | 49.01% | 96.12% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010266014989678541 | 6.14353298519506e-05 | 40.16% | 67.10% | 1.67x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.438116184384025e-05 | 4.164221559413e-05 | 50.65% | 102.63% | 2.03x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.137344274293793e-05 | 4.2507985283148273e-05 | 47.76% | 91.43% | 1.91x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.245376676625844e-05 | 4.1162213835615545e-05 | 50.08% | 100.31% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.324425027768694e-05 | 4.223232463457548e-05 | 49.27% | 97.11% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.282383109515628e-05 | 4.115530597483992e-05 | 50.31% | 101.25% | 2.01x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.395546208964749e-05 | 4.214630270482577e-05 | 49.80% | 99.20% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.677427156580548e-05 | 5.546938098555919e-05 | 42.68% | 74.46% | 1.74x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.392974119287329e-05 | 4.200733915070935e-05 | 49.95% | 99.80% | 2.00x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.651644251851393e-05 | 5.5439074983408645e-05 | 42.56% | 74.09% | 1.74x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.349910337683617e-05 | 4.265729960768358e-05 | 48.91% | 95.74% | 1.96x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.427348637545811e-05 | 4.146332279051278e-05 | 50.80% | 103.25% | 2.03x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.282381709946615e-05 | 4.286033497120014e-05 | 48.25% | 93.24% | 1.93x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.312976257826953e-05 | 4.288815430105179e-05 | 48.41% | 93.83% | 1.94x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.341092223467466e-05 | 4.1502849549868106e-05 | 50.24% | 100.98% | 2.01x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.327185915634825e-05 | 4.2549678579955887e-05 | 48.90% | 95.71% | 1.96x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.243543734381655e-05 | 4.233451117794459e-05 | 48.65% | 94.72% | 1.95x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.319504977043988e-05 | 4.38856368502512e-05 | 47.25% | 89.57% | 1.90x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.368606154809434e-05 | 4.2708270896328195e-05 | 48.97% | 95.95% | 1.96x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.3317426056110516e-05 | 2.4320532379674234e-05 | 43.86% | 78.11% | 1.78x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.2741148634234006e-05 | 2.3815085485794206e-05 | 44.28% | 79.47% | 1.79x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.258854303519935e-05 | 2.365551268105089e-05 | 44.46% | 80.04% | 1.80x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.333860684388637e-05 | 2.413034670290958e-05 | 44.32% | 79.60% | 1.80x | ✅ |
| `hexbytes_new[palindrome]` | 4.292218427453656e-05 | 2.3770639275952752e-05 | 44.62% | 80.57% | 1.81x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.2965620359524987e-05 | 2.408557086340176e-05 | 43.94% | 78.39% | 1.78x | ✅ |
| `hexbytes_new[single 0xff]` | 4.2064214621154164e-05 | 2.447509086531334e-05 | 41.81% | 71.87% | 1.72x | ✅ |
| `hexbytes_new[single null byte]` | 4.226629438351829e-05 | 2.4554889602542783e-05 | 41.90% | 72.13% | 1.72x | ✅ |
| `hexbytes_new[two patterns]` | 4.388268679747618e-05 | 2.5056110706577672e-05 | 42.90% | 75.14% | 1.75x | ✅ |
| `hexbytes_repr[0-9]` | 3.395599553977928e-05 | 1.5485936467016544e-05 | 54.39% | 119.27% | 2.19x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.0001245537827765702 | 4.200954655327881e-05 | 66.27% | 196.49% | 2.96x | ✅ |
| `hexbytes_repr[all byte values]` | 0.0001245414152858581 | 4.191609906084596e-05 | 66.34% | 197.12% | 2.97x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.434214348392303e-05 | 2.1290362043381587e-05 | 60.82% | 155.24% | 2.55x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.4088171748155236e-05 | 2.102295635475981e-05 | 61.13% | 157.28% | 2.57x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.541764718381623e-05 | 1.8848989375975996e-05 | 58.50% | 140.96% | 2.41x | ✅ |
| `hexbytes_repr[b'']` | 2.5322374215954718e-05 | 1.2101477510293281e-05 | 52.21% | 109.25% | 2.09x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 4.147260222147477e-05 | 1.7382167314408595e-05 | 58.09% | 138.59% | 2.39x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 3.225772333363988e-05 | 1.4877042322459266e-05 | 53.88% | 116.83% | 2.17x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.712802820964958e-05 | 2.4562620937190262e-05 | 63.41% | 173.29% | 2.73x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007696558376526063 | 0.00022407893731803754 | 70.89% | 243.48% | 3.43x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 3.1556130511779803e-05 | 1.5045300379773315e-05 | 52.32% | 109.74% | 2.10x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 3.289002037034099e-05 | 1.4813584615548688e-05 | 54.96% | 122.03% | 2.22x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.4203411241796954e-05 | 1.5756506661917312e-05 | 53.93% | 117.07% | 2.17x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.342218362335683e-05 | 1.538027937671566e-05 | 53.98% | 117.31% | 2.17x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 3.2266581817596806e-05 | 1.5020947045376643e-05 | 53.45% | 114.81% | 2.15x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.421103158414249e-05 | 2.107155813922305e-05 | 61.13% | 157.27% | 2.57x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00040314104981798506 | 0.00012297701149150404 | 69.50% | 227.82% | 3.28x | ✅ |
| `hexbytes_repr[b'abc']` | 3.1768350826075396e-05 | 1.4657905567673822e-05 | 53.86% | 116.73% | 2.17x | ✅ |
| `hexbytes_repr[long alternating]` | 0.00040377506830458024 | 0.00012298498114816632 | 69.54% | 228.31% | 3.28x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.0001025174562903603 | 3.590097522279773e-05 | 64.98% | 185.56% | 2.86x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.381450092030415e-05 | 1.5548762203106305e-05 | 54.02% | 117.47% | 2.17x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.359666191449213e-05 | 1.5268528333113587e-05 | 54.55% | 120.04% | 2.20x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 3.295729649987619e-05 | 1.4765171576721372e-05 | 55.20% | 123.21% | 2.23x | ✅ |
| `hexbytes_repr[palindrome]` | 3.728049562391799e-05 | 1.6526748706489514e-05 | 55.67% | 125.58% | 2.26x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.669631724953232e-05 | 2.4525365075940778e-05 | 63.23% | 171.95% | 2.72x | ✅ |
| `hexbytes_repr[single 0xff]` | 3.061860895622054e-05 | 1.478400613566346e-05 | 51.72% | 107.11% | 2.07x | ✅ |
| `hexbytes_repr[single null byte]` | 3.06598802672025e-05 | 1.479767404094244e-05 | 51.74% | 107.19% | 2.07x | ✅ |
| `hexbytes_repr[two patterns]` | 5.373889903462911e-05 | 2.1043604993944013e-05 | 60.84% | 155.37% | 2.55x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.7154804996521365e-05 | 1.4421575502325045e-05 | 15.93% | 18.95% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.335763225088518e-05 | 4.0867433603637764e-05 | 5.74% | 6.09% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.346321653249156e-05 | 4.083420692572371e-05 | 6.05% | 6.44% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.2432320106715072e-05 | 1.9514968824694152e-05 | 13.01% | 14.95% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.2353798339091335e-05 | 1.954557481178632e-05 | 12.56% | 14.37% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.034968012787143e-05 | 1.778425667786154e-05 | 12.61% | 14.43% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.031204707136613e-05 | 1.1094290181257523e-05 | -7.59% | -7.05% | 0.93x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.8829115945447364e-05 | 1.611231237206526e-05 | 14.43% | 16.86% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.6729833539004334e-05 | 1.3846158438805039e-05 | 17.24% | 20.83% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.8216639315299392e-05 | 2.290816662092297e-05 | 18.81% | 23.17% | 1.23x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022573901540084472 | 0.00022206654426124383 | 1.63% | 1.65% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.6154770252308653e-05 | 1.360376431627671e-05 | 15.79% | 18.75% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.689504039611835e-05 | 1.3951086694239977e-05 | 17.42% | 21.10% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.7164317518198173e-05 | 1.4056127081044236e-05 | 18.11% | 22.11% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.7107804829229924e-05 | 1.4201123528426207e-05 | 16.99% | 20.47% | 1.20x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.669502056373239e-05 | 1.3607107844425664e-05 | 18.50% | 22.69% | 1.23x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.241192741023954e-05 | 1.9582913408416093e-05 | 12.62% | 14.45% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.0001241132381842748 | 0.00012229739049102553 | 1.46% | 1.48% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.620894736141836e-05 | 1.4116012132014887e-05 | 12.91% | 14.83% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.0001244038814797695 | 0.00012157794466065828 | 2.27% | 2.32% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.6215495410616133e-05 | 3.3637738838106544e-05 | 7.12% | 7.66% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.7038950745444295e-05 | 1.4656632558080028e-05 | 13.98% | 16.25% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.6894965232326014e-05 | 1.418519449380741e-05 | 16.04% | 19.10% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.6892473863630816e-05 | 1.3888529365122146e-05 | 17.78% | 21.63% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.7815282742939296e-05 | 1.51689225555844e-05 | 14.85% | 17.45% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.6153142606257002e-05 | 2.301603931042861e-05 | 12.00% | 13.63% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.5793692803792087e-05 | 1.3359626810986172e-05 | 15.41% | 18.22% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.573450509348577e-05 | 1.336005086418211e-05 | 15.09% | 17.77% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.2292792095960684e-05 | 1.9737716563477585e-05 | 11.46% | 12.95% | 1.13x | ✅ |
