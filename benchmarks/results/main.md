#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/codex/add-test-for-compiled-c-code/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/codex/add-test-for-compiled-c-code/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.6820119172011483e-05 | 2.567361542621035e-05 | 4.27% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.6843634554846694e-05 | 2.6030653279440794e-05 | 3.03% | 3.12% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.630962408021157e-05 | 2.5994889285517006e-05 | 1.20% | 1.21% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.6656399999763208e-05 | 2.5953878798364554e-05 | 2.64% | 2.71% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.6732416126249433e-05 | 2.605521540012739e-05 | 2.53% | 2.60% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.6574926182155648e-05 | 2.590836646831884e-05 | 2.51% | 2.57% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.6340479320481254e-05 | 2.5261088348518467e-05 | 4.10% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.6715455175088933e-05 | 2.566739391562861e-05 | 3.92% | 4.08% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.6739386911444424e-05 | 2.5978458667997206e-05 | 2.85% | 2.93% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.655152242623822e-05 | 2.5564970637080095e-05 | 3.72% | 3.86% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.6675889054755286e-05 | 2.5521178235421148e-05 | 4.33% | 4.52% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6547992373864055e-05 | 2.61133319301126e-05 | 1.64% | 1.66% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.6428470298479558e-05 | 2.5483691373747328e-05 | 3.57% | 3.71% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.6399321935133604e-05 | 2.72086119880581e-05 | -3.07% | -2.97% | 0.97x | ❌ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.6782334066274554e-05 | 2.548513810287477e-05 | 4.84% | 5.09% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.6856820330988548e-05 | 2.5509966137527114e-05 | 5.01% | 5.28% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.6815816893753813e-05 | 2.5557319263846977e-05 | 4.69% | 4.92% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.6991893974420562e-05 | 2.5714267607599642e-05 | 4.73% | 4.97% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.676345234029674e-05 | 2.59495071641108e-05 | 3.04% | 3.14% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.6720187106027637e-05 | 2.5983417276340724e-05 | 2.76% | 2.84% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.671654099861135e-05 | 2.5631421598434575e-05 | 4.06% | 4.23% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.646149842791266e-05 | 2.6094677761443043e-05 | 1.39% | 1.41% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.664858677811854e-05 | 2.60681403707236e-05 | 2.18% | 2.23% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.6472448232303386e-05 | 2.5566425192450254e-05 | 3.42% | 3.54% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.6808685517864003e-05 | 2.5724178340037856e-05 | 4.05% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.678055832114265e-05 | 2.6019375512804302e-05 | 2.84% | 2.93% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.6349656595541227e-05 | 2.457192305784312e-05 | 6.75% | 7.23% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.6035652942130896e-05 | 2.45156557621605e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.5900279409966073e-05 | 2.432475077056986e-05 | 6.08% | 6.48% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.6000236988665158e-05 | 2.4548425995139818e-05 | 5.58% | 5.91% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.6034837742620996e-05 | 2.5051882926659998e-05 | 3.78% | 3.92% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.602370739691869e-05 | 2.5072618699284418e-05 | 3.65% | 3.79% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.612093247705387e-05 | 2.4616136220960865e-05 | 5.76% | 6.11% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.6244595597089414e-05 | 2.464356051392005e-05 | 6.10% | 6.50% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.578884765204065e-05 | 2.5003142876640773e-05 | 3.05% | 3.14% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.6256833734592562e-05 | 2.5084387212496573e-05 | 4.47% | 4.67% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.6380354181002284e-05 | 2.4957007645360014e-05 | 5.40% | 5.70% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.5817498099985842e-05 | 2.505590175459515e-05 | 2.95% | 3.04% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.6055180109682008e-05 | 2.5111442827146402e-05 | 3.62% | 3.76% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.5822046693890997e-05 | 2.4896501672136836e-05 | 3.58% | 3.72% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.6228132767858838e-05 | 2.4979728976376417e-05 | 4.76% | 5.00% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.60117065085239e-05 | 2.5010379028435143e-05 | 3.85% | 4.00% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.6244080822048488e-05 | 2.510645342509824e-05 | 4.33% | 4.53% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.5968938761059864e-05 | 2.491465230216448e-05 | 4.06% | 4.23% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.5895770321452088e-05 | 2.4367340604567827e-05 | 5.90% | 6.27% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.596925533140455e-05 | 2.5187024141519758e-05 | 3.01% | 3.11% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.6097014993005055e-05 | 2.450965169356343e-05 | 6.08% | 6.48% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.5691634271959558e-05 | 2.49205077063144e-05 | 3.00% | 3.09% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.59037014853128e-05 | 2.4991185572544332e-05 | 3.52% | 3.65% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.605433097760724e-05 | 2.5056480146287125e-05 | 3.83% | 3.98% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.6157088422538267e-05 | 2.494653008901209e-05 | 4.63% | 4.85% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.6097719812047584e-05 | 2.521867300065488e-05 | 3.37% | 3.49% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.5973362448133017e-05 | 2.4352305580010318e-05 | 6.24% | 6.66% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.638412128701725e-05 | 2.4420335269451375e-05 | 7.44% | 8.04% | 1.08x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.5815488779519794e-05 | 2.486705040926588e-05 | 3.67% | 3.81% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.5968478049344884e-05 | 2.4959509377661967e-05 | 3.89% | 4.04% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.60510298334469e-05 | 2.501389246871586e-05 | 3.98% | 4.15% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.6132165701226042e-05 | 2.5018424421983923e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.6001774887522506e-05 | 2.50689925063922e-05 | 3.59% | 3.72% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.6226070627694417e-05 | 2.48768273760988e-05 | 5.14% | 5.42% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.5923312223896696e-05 | 2.4680962834296654e-05 | 4.79% | 5.03% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.586816957797072e-05 | 2.5088562815052244e-05 | 3.01% | 3.11% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.6264569862937374e-05 | 2.495103374418657e-05 | 5.00% | 5.26% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.611139820457171e-05 | 2.5087792930493474e-05 | 3.92% | 4.08% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.6128199152978425e-05 | 2.503675738122644e-05 | 4.18% | 4.36% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6271305511635856e-05 | 2.501091796414114e-05 | 4.80% | 5.04% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.60519697463905e-05 | 2.4897322589092753e-05 | 4.43% | 4.64% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.6390012135098342e-05 | 2.5036352223047758e-05 | 5.13% | 5.41% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.5895062006900366e-05 | 2.51438616756716e-05 | 2.90% | 2.99% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.598091547380673e-05 | 2.4979712422643166e-05 | 3.85% | 4.01% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.6074307366353443e-05 | 2.5409762781331544e-05 | 2.55% | 2.62% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.5917977012239713e-05 | 2.533713418194436e-05 | 2.24% | 2.29% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.591950933325304e-05 | 2.5111884835310725e-05 | 3.12% | 3.22% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.596365323902639e-05 | 2.5350801599962666e-05 | 2.36% | 2.42% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.6053184698399474e-05 | 2.500254952528089e-05 | 4.03% | 4.20% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.598321046385172e-05 | 2.5046714883771104e-05 | 3.60% | 3.74% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.6058438695955173e-05 | 2.505587178740529e-05 | 3.85% | 4.00% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.627978317158559e-05 | 2.50570433004576e-05 | 4.65% | 4.88% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.603693336298675e-05 | 2.499190388505727e-05 | 4.01% | 4.18% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.5975638420242362e-05 | 2.5039230547049064e-05 | 3.60% | 3.74% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.5982375190929116e-05 | 2.5163671897041666e-05 | 3.15% | 3.25% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.6168357553157384e-05 | 2.517507241632412e-05 | 3.80% | 3.95% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.614020150868292e-05 | 2.5120534594739126e-05 | 3.90% | 4.06% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.5980991400151127e-05 | 2.4744044049610394e-05 | 4.76% | 5.00% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.5888266577598314e-05 | 2.5336656481272164e-05 | 2.13% | 2.18% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.5889885218918972e-05 | 2.5180111570126635e-05 | 2.74% | 2.82% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.596857940328159e-05 | 2.459187178184221e-05 | 5.30% | 5.60% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.5942031604924996e-05 | 2.451834854469138e-05 | 5.49% | 5.81% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.619323441237538e-05 | 2.5295290924308858e-05 | 3.43% | 3.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.6212233690125176e-05 | 2.5188557485859976e-05 | 3.91% | 4.06% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.5925701771652857e-05 | 2.51067209404757e-05 | 3.16% | 3.26% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.606277699551197e-05 | 2.537684866331348e-05 | 2.63% | 2.70% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.580276891373594e-05 | 2.5103616557803754e-05 | 2.71% | 2.79% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.587976312510062e-05 | 2.4943025251356275e-05 | 3.62% | 3.76% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.5999484437660925e-05 | 2.4996604909348854e-05 | 3.86% | 4.01% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.6003907166694593e-05 | 2.5043945524062323e-05 | 3.69% | 3.83% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.595085234375293e-05 | 2.512483620543525e-05 | 3.18% | 3.29% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.5970525984166568e-05 | 2.5072445529736737e-05 | 3.46% | 3.58% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.6372185990974704e-05 | 2.463675899526733e-05 | 6.58% | 7.04% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.5764615779527926e-05 | 2.5088236316721804e-05 | 2.63% | 2.70% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.603528420698829e-05 | 2.516293089612835e-05 | 3.35% | 3.47% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.6000837401600636e-05 | 2.5020033453900963e-05 | 3.77% | 3.92% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.578332849342201e-05 | 2.5136904194183463e-05 | 2.51% | 2.57% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.613024275957979e-05 | 2.511720000586481e-05 | 3.88% | 4.03% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.618231967366769e-05 | 2.5125626834845563e-05 | 4.04% | 4.21% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.6005890482085092e-05 | 2.45668071453503e-05 | 5.53% | 5.86% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.6138298814860638e-05 | 2.49341899648408e-05 | 4.61% | 4.83% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.6158255246874102e-05 | 2.508650848552961e-05 | 4.10% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.603588873895442e-05 | 2.501020701502372e-05 | 3.94% | 4.10% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.5804394417229e-05 | 2.4938035282274492e-05 | 3.36% | 3.47% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.5801459235992952e-05 | 2.505824098238107e-05 | 2.88% | 2.97% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.599519675510997e-05 | 2.509829619329135e-05 | 3.45% | 3.57% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.5937156146639973e-05 | 2.451102531922793e-05 | 5.50% | 5.82% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.618576673496096e-05 | 2.5075049651097408e-05 | 4.24% | 4.43% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.5982089820819934e-05 | 2.482703956581016e-05 | 4.45% | 4.65% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.602684023486765e-05 | 2.5154928416277248e-05 | 3.35% | 3.47% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.616052005441525e-05 | 2.5063022809135454e-05 | 4.20% | 4.38% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.582025381617535e-05 | 2.5176754711496326e-05 | 2.49% | 2.56% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.5898743356264935e-05 | 2.502812646623868e-05 | 3.36% | 3.48% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.605314143381087e-05 | 2.5063430390852942e-05 | 3.80% | 3.95% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.6098827723743265e-05 | 2.5122286668420146e-05 | 3.74% | 3.89% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.608502915424798e-05 | 2.5060156382697953e-05 | 3.93% | 4.09% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.601666934757413e-05 | 2.5018477366038605e-05 | 3.84% | 3.99% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.611254199188052e-05 | 2.5105004394371414e-05 | 3.86% | 4.01% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.5904532013455217e-05 | 2.5120233754972576e-05 | 3.03% | 3.12% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.601979519715835e-05 | 2.510393269550278e-05 | 3.52% | 3.65% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.6189557685998377e-05 | 2.5106400725457716e-05 | 4.14% | 4.31% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.5729001286354467e-05 | 2.5129076538227653e-05 | 2.33% | 2.39% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.5786276458554088e-05 | 2.502725833964895e-05 | 2.94% | 3.03% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.6075304373358542e-05 | 2.5001360431806952e-05 | 4.12% | 4.30% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.590458939918236e-05 | 2.497797311607127e-05 | 3.58% | 3.71% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.595059992212082e-05 | 2.448743542278037e-05 | 5.64% | 5.98% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.6044463363121137e-05 | 2.5111906877586407e-05 | 3.58% | 3.71% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.612971798719638e-05 | 2.4416235851225707e-05 | 6.56% | 7.02% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.590348890076581e-05 | 2.4986571575090237e-05 | 3.54% | 3.67% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.6113192828256657e-05 | 2.617099792662526e-05 | -0.22% | -0.22% | 1.00x | ❌ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.5890862211845867e-05 | 2.4429913160643448e-05 | 5.64% | 5.98% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.579972906653628e-05 | 2.4951614621624437e-05 | 3.29% | 3.40% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.5959761648877086e-05 | 2.4901891367731312e-05 | 4.08% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.5943658156555743e-05 | 2.4981258436257e-05 | 3.71% | 3.85% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.560205322581512e-05 | 2.499644063744536e-05 | 2.37% | 2.42% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.585626459352754e-05 | 2.505801060949913e-05 | 3.09% | 3.19% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.597096337842152e-05 | 2.517777274028356e-05 | 3.05% | 3.15% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.5971674378270274e-05 | 2.5108237739331972e-05 | 3.32% | 3.44% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.598105570710215e-05 | 2.4475396230705627e-05 | 5.80% | 6.15% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.6142367907777876e-05 | 2.489212278770101e-05 | 4.78% | 5.02% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.603298620425746e-05 | 2.5027187687606182e-05 | 3.86% | 4.02% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.60413805790481e-05 | 2.4976830392721195e-05 | 4.09% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.5880393591306536e-05 | 2.5062668996246243e-05 | 3.16% | 3.26% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.5725636631854044e-05 | 2.5085930312904567e-05 | 2.49% | 2.55% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.6095148051116922e-05 | 2.4982065725849106e-05 | 4.27% | 4.46% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.602926625288377e-05 | 2.4428380669436955e-05 | 6.15% | 6.55% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.6198350809980937e-05 | 2.5101838841947315e-05 | 4.19% | 4.37% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.6203403312507695e-05 | 2.4954428831974148e-05 | 4.77% | 5.01% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.6227677954240346e-05 | 2.6306308667886283e-05 | -0.30% | -0.30% | 1.00x | ❌ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.6138151835882154e-05 | 2.4946818202614722e-05 | 4.56% | 4.78% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.6302935722471237e-05 | 2.499248659852038e-05 | 4.98% | 5.24% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.60658309708783e-05 | 2.47790964061196e-05 | 4.94% | 5.19% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.6125429395574783e-05 | 2.4531218666776163e-05 | 6.10% | 6.50% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.600301962561453e-05 | 2.495221402597878e-05 | 4.04% | 4.21% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.5995453078214897e-05 | 2.4795129473209696e-05 | 4.62% | 4.84% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.595698219481458e-05 | 2.504667653849629e-05 | 3.51% | 3.63% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.6141801341420672e-05 | 2.50132573328898e-05 | 4.32% | 4.51% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.5779661195462387e-05 | 2.4916351359779904e-05 | 3.35% | 3.46% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.5783270807224454e-05 | 2.5048370254667476e-05 | 2.85% | 2.93% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.6061670397446747e-05 | 2.4937886517435286e-05 | 4.31% | 4.51% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.593926961460574e-05 | 2.504196905074047e-05 | 3.46% | 3.58% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.6059043065669878e-05 | 2.487046473228577e-05 | 4.56% | 4.78% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.5852964268859993e-05 | 2.4925380275001456e-05 | 3.59% | 3.72% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.6005577747414145e-05 | 2.4999564977404035e-05 | 3.87% | 4.02% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.6219019573222682e-05 | 2.53025287621474e-05 | 3.50% | 3.62% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.6044343707221355e-05 | 2.4796683841749816e-05 | 4.79% | 5.03% | 1.05x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.13967114416562e-05 | 5.861175128179065e-05 | 27.99% | 38.87% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.089783039614512e-05 | 5.7532923379569506e-05 | 28.88% | 40.61% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.193273876722914e-05 | 5.771076031417633e-05 | 29.56% | 41.97% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.169136884226062e-05 | 5.870556692261886e-05 | 28.14% | 39.15% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.113176567308523e-05 | 5.784346581576342e-05 | 28.70% | 40.26% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.141215676809898e-05 | 5.765960927706509e-05 | 29.18% | 41.19% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.814443053814148e-05 | 5.736943930072462e-05 | 26.59% | 36.21% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.261958809487238e-05 | 5.972715335133593e-05 | 27.71% | 38.33% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.13936195305425e-05 | 5.825013942054898e-05 | 28.43% | 39.73% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.086022932266183e-05 | 5.800300745186287e-05 | 28.27% | 39.41% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.092416218434336e-05 | 5.7682697942696856e-05 | 28.72% | 40.29% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.18991605758606e-05 | 5.971395149494618e-05 | 27.09% | 37.15% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.217702903137965e-05 | 5.799841649866361e-05 | 29.42% | 41.69% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.172120481031042e-05 | 5.847257813080515e-05 | 28.45% | 39.76% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.201916538688358e-05 | 5.82219438302081e-05 | 29.01% | 40.87% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.181029352283668e-05 | 5.817851756221953e-05 | 28.89% | 40.62% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.273179032281615e-05 | 5.8630576441679396e-05 | 29.13% | 41.11% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.166122927612843e-05 | 5.9734966819650944e-05 | 26.85% | 36.71% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.222317522522933e-05 | 5.941609185908743e-05 | 27.74% | 38.39% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.107532182907444e-05 | 5.82730803369341e-05 | 28.12% | 39.13% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.096512066877741e-05 | 5.8171722859381594e-05 | 28.15% | 39.18% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.180484852549088e-05 | 5.7876077836843565e-05 | 29.25% | 41.34% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.106525802740295e-05 | 5.819445986654723e-05 | 28.21% | 39.30% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.087006499708548e-05 | 5.792908252899008e-05 | 28.37% | 39.60% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.182376663811281e-05 | 5.8211491628105104e-05 | 28.86% | 40.56% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.05458305505989e-05 | 5.784037027572369e-05 | 28.19% | 39.26% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.782857906736332e-05 | 5.7187064848256817e-05 | 26.52% | 36.09% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.833217074094285e-05 | 5.671645343307478e-05 | 27.59% | 38.11% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.102207470497284e-05 | 5.799004988729082e-05 | 28.43% | 39.72% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.190082007729627e-05 | 5.910066131637596e-05 | 27.84% | 38.58% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.230401380219724e-05 | 5.9427181181583e-05 | 27.80% | 38.50% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.266139192603786e-05 | 5.960768852121332e-05 | 27.89% | 38.68% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.228247714601882e-05 | 5.9140440309879404e-05 | 28.13% | 39.13% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.258088924582368e-05 | 5.87080810555169e-05 | 28.91% | 40.66% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.265338765394417e-05 | 5.9845591361259285e-05 | 27.59% | 38.11% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.961615206718436e-05 | 5.641870875526469e-05 | 29.14% | 41.12% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.30753317818131e-05 | 5.9353656437469986e-05 | 28.55% | 39.97% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.258158999233026e-05 | 5.859832089521606e-05 | 29.04% | 40.93% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.232127959216939e-05 | 5.871189290234988e-05 | 28.68% | 40.21% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.19393256299062e-05 | 6.015043068956318e-05 | 26.59% | 36.22% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.219382891507864e-05 | 5.887739804900057e-05 | 28.37% | 39.60% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.382759878219804e-05 | 5.911283687989651e-05 | 29.48% | 41.81% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.241403466770186e-05 | 5.9131404972495344e-05 | 28.25% | 39.37% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.258995379073268e-05 | 5.908373096158089e-05 | 28.46% | 39.78% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.196917312249307e-05 | 5.9201910301186065e-05 | 27.78% | 38.46% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.287861189908949e-05 | 5.909009041452814e-05 | 28.70% | 40.26% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.192505588283066e-05 | 5.8359849308753684e-05 | 28.76% | 40.38% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.264123767053974e-05 | 5.8686753796706234e-05 | 28.99% | 40.82% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.186202557870708e-05 | 5.91968599894844e-05 | 27.69% | 38.29% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.22151615159777e-05 | 5.955577583204346e-05 | 27.56% | 38.05% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.250974028486508e-05 | 5.864984086988862e-05 | 28.92% | 40.68% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.276691698573973e-05 | 5.9878360067941024e-05 | 27.65% | 38.23% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.266357634224749e-05 | 5.9446741197305287e-05 | 28.09% | 39.05% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.187603917614483e-05 | 5.896898250436398e-05 | 27.98% | 38.85% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.265301215543947e-05 | 5.9358640254893085e-05 | 28.18% | 39.24% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.148578215111849e-05 | 5.7441658796761e-05 | 29.51% | 41.86% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.922440750587504e-05 | 5.796630043857091e-05 | 26.83% | 36.67% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.232484294697458e-05 | 5.971170048464433e-05 | 27.47% | 37.87% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.1609326197678e-05 | 5.9405814029291705e-05 | 27.21% | 37.38% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.188261699356247e-05 | 6.153996932491598e-05 | 24.84% | 33.06% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.20439757550103e-05 | 5.9992362776813185e-05 | 26.88% | 36.76% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.20444065652659e-05 | 5.94422280384701e-05 | 27.55% | 38.02% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.231038749256817e-05 | 5.9313948686711334e-05 | 27.94% | 38.77% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.191115939731068e-05 | 6.0259730926155274e-05 | 26.43% | 35.93% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.957143178999749e-05 | 5.774364011258055e-05 | 27.43% | 37.80% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.167230827457706e-05 | 5.963155815195703e-05 | 26.99% | 36.96% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.132532432659488e-05 | 5.938801662578202e-05 | 26.97% | 36.94% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.195290990525928e-05 | 5.9664767249898214e-05 | 27.20% | 37.36% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.178027349263873e-05 | 5.959349286800015e-05 | 27.13% | 37.23% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.035365077425075e-05 | 5.960119837667112e-05 | 25.83% | 34.82% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.083377896318213e-05 | 5.859560728170384e-05 | 27.51% | 37.95% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.214739592317491e-05 | 5.9628351305371125e-05 | 27.41% | 37.77% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.144583544238978e-05 | 5.94851901015321e-05 | 26.96% | 36.92% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.163397057149368e-05 | 5.953646325731597e-05 | 27.07% | 37.12% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.234708933448378e-05 | 5.996715796644009e-05 | 27.18% | 37.32% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.215600144998747e-05 | 6.08075031919232e-05 | 25.99% | 35.11% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.188997405825021e-05 | 5.997668331866647e-05 | 26.76% | 36.54% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.166189294219244e-05 | 5.935112215481093e-05 | 27.32% | 37.59% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.212313150890647e-05 | 5.996483850966156e-05 | 26.98% | 36.95% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.201440680490262e-05 | 5.9289122775983005e-05 | 27.71% | 38.33% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.204763740550465e-05 | 6.0060318505410466e-05 | 26.80% | 36.61% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.195768729430109e-05 | 5.941898431105333e-05 | 27.50% | 37.93% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.090344462409639e-05 | 5.966117313941663e-05 | 26.26% | 35.60% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.226359701104747e-05 | 6.0025978134152046e-05 | 27.03% | 37.05% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.826947474442545e-05 | 5.757684259917775e-05 | 26.44% | 35.94% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 7.909537458131968e-05 | 5.796227965610381e-05 | 26.72% | 36.46% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.20484507199802e-05 | 6.062435577725234e-05 | 26.11% | 35.34% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.12138174779745e-05 | 5.837611358635565e-05 | 28.12% | 39.12% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.216497535733198e-05 | 5.97654126431303e-05 | 27.26% | 37.48% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.232482271268791e-05 | 5.7714449578632416e-05 | 29.89% | 42.64% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.085963188072963e-05 | 5.873947810794333e-05 | 27.36% | 37.66% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.164784337775754e-05 | 5.91654310927542e-05 | 27.54% | 38.00% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.054631012788863e-05 | 5.9084093574515567e-05 | 26.65% | 36.32% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.896800228261636e-05 | 5.682856292346082e-05 | 28.04% | 38.96% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.301827643836418e-05 | 5.8551810506275074e-05 | 29.47% | 41.79% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.168559854996297e-05 | 5.910263497789353e-05 | 27.65% | 38.21% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.218428223464864e-05 | 5.9416586070860464e-05 | 27.70% | 38.32% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010277221030304604 | 7.78312447114341e-05 | 24.27% | 32.04% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.754141444312998e-05 | 5.6814032280770825e-05 | 26.73% | 36.48% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.164674877783673e-05 | 5.88487390701817e-05 | 27.92% | 38.74% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.315346133954963e-05 | 5.912108992807726e-05 | 28.90% | 40.65% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.396587940496926e-05 | 5.9091271466234936e-05 | 29.62% | 42.10% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.075294502652371e-05 | 5.8441463114140805e-05 | 27.63% | 38.18% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.44524177651519e-05 | 5.875929621418384e-05 | 30.42% | 43.73% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.641339851149784e-05 | 7.254331072863186e-05 | 24.76% | 32.90% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.796781796621625e-05 | 5.6703214117298804e-05 | 27.27% | 37.50% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.807483651599857e-05 | 7.392336169859228e-05 | 24.63% | 32.67% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.225661243261755e-05 | 5.8853231759168647e-05 | 28.45% | 39.77% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.05664360060073e-05 | 5.838199773132549e-05 | 27.54% | 38.00% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.147769199294593e-05 | 5.890416678081788e-05 | 27.71% | 38.32% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.151250054768734e-05 | 5.8284995661610864e-05 | 28.50% | 39.85% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.104152452064068e-05 | 5.819821032531658e-05 | 28.19% | 39.25% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.168771040384973e-05 | 6.0089768942939914e-05 | 26.44% | 35.94% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.85212859768666e-05 | 5.6379213923944724e-05 | 28.20% | 39.27% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.816890130399922e-05 | 5.615298117408337e-05 | 28.16% | 39.21% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.086634599166477e-05 | 5.869119116035591e-05 | 27.42% | 37.78% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.874407946174505e-05 | 5.650662635410076e-05 | 28.24% | 39.35% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.001942342515921e-05 | 6.058433568433088e-05 | 24.29% | 32.08% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.068893193638117e-05 | 6.0733896561082295e-05 | 24.73% | 32.86% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.917279673539742e-05 | 5.663712684347132e-05 | 28.46% | 39.79% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.023353381943705e-05 | 5.662446713947345e-05 | 29.43% | 41.69% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.826748757022637e-05 | 5.7216820159319585e-05 | 26.90% | 36.79% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.741518419119038e-05 | 5.507591103558941e-05 | 28.86% | 40.56% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.89925818047901e-05 | 5.710384532890709e-05 | 27.71% | 38.33% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.886255321762272e-05 | 5.737167521995312e-05 | 27.25% | 37.46% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.915502116455876e-05 | 5.7596439581167035e-05 | 27.24% | 37.43% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010167322659546815 | 7.73291847482591e-05 | 23.94% | 31.48% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.994130931517944e-05 | 5.7224943081288755e-05 | 28.42% | 39.70% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.976215135323761e-05 | 5.7236306064849374e-05 | 28.24% | 39.36% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.837930733590366e-05 | 5.681372093450207e-05 | 27.51% | 37.96% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.942465671523168e-05 | 5.675727333642444e-05 | 28.54% | 39.94% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.926776419590646e-05 | 5.713853306794751e-05 | 27.92% | 38.73% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.956810852640572e-05 | 5.714947556813732e-05 | 28.18% | 39.23% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.63122927069723e-05 | 7.206670819969288e-05 | 25.17% | 33.64% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.951856883698097e-05 | 5.722222985597625e-05 | 28.04% | 38.96% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.504743000059358e-05 | 7.284435672213834e-05 | 23.36% | 30.48% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.98725643544848e-05 | 5.738590944089428e-05 | 28.15% | 39.18% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.860902927830257e-05 | 5.700546925592547e-05 | 27.48% | 37.90% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.8083282334778e-05 | 5.770954652140579e-05 | 26.09% | 35.30% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.900481775013238e-05 | 5.7757738987284454e-05 | 26.89% | 36.79% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.916629803579947e-05 | 5.6914306663062515e-05 | 28.11% | 39.10% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.882235618798065e-05 | 5.837206092638051e-05 | 25.94% | 35.03% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.63964894014393e-05 | 5.610089383716481e-05 | 26.57% | 36.18% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.590745485421564e-05 | 5.57506643605051e-05 | 26.55% | 36.16% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.870000210532999e-05 | 5.7422576746331717e-05 | 27.04% | 37.05% | 1.37x | ✅ |
| `hexbytes_new['']` | 7.144285525135513e-05 | 3.5222847981125696e-05 | 50.70% | 102.83% | 2.03x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 8.921352511036852e-05 | 4.8916189432066974e-05 | 45.17% | 82.38% | 1.82x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 8.988403057466815e-05 | 4.922184942446092e-05 | 45.24% | 82.61% | 1.83x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.724460171950607e-05 | 4.650310638297306e-05 | 46.70% | 87.61% | 1.88x | ✅ |
| `hexbytes_new['0x']` | 7.611395758352993e-05 | 3.620509002583269e-05 | 52.43% | 110.23% | 2.10x | ✅ |
| `hexbytes_new['0x1234']` | 8.48771100745252e-05 | 4.2270817991074026e-05 | 50.20% | 100.79% | 2.01x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.473295876109062e-05 | 4.261722510600602e-05 | 49.70% | 98.82% | 1.99x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.467608780054507e-05 | 4.338145308136634e-05 | 48.77% | 95.19% | 1.95x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.508668843469841e-05 | 4.336306102298063e-05 | 49.04% | 96.22% | 1.96x | ✅ |
| `hexbytes_new['abc']` | 8.413759089681958e-05 | 4.610579052071329e-05 | 45.20% | 82.49% | 1.82x | ✅ |
| `hexbytes_new['deadbeef']` | 7.661923620371068e-05 | 4.092428168652747e-05 | 46.59% | 87.22% | 1.87x | ✅ |
| `hexbytes_new[0-9]` | 4.254449272447921e-05 | 2.384701368519073e-05 | 43.95% | 78.41% | 1.78x | ✅ |
| `hexbytes_new[0]` | 0.0001266856857215245 | 6.179289833824074e-05 | 51.22% | 105.02% | 2.05x | ✅ |
| `hexbytes_new[123456]` | 0.0001253813536333859 | 6.515776278270259e-05 | 48.03% | 92.43% | 1.92x | ✅ |
| `hexbytes_new[2**16]` | 0.0001286919620468145 | 6.517193411682887e-05 | 49.36% | 97.47% | 1.97x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013191638287634585 | 7.185481712673118e-05 | 45.53% | 83.59% | 1.84x | ✅ |
| `hexbytes_new[2**32]` | 0.00012772194264110574 | 6.962511752108429e-05 | 45.49% | 83.44% | 1.83x | ✅ |
| `hexbytes_new[2**64]` | 0.00012926761393774406 | 7.099926727041889e-05 | 45.08% | 82.07% | 1.82x | ✅ |
| `hexbytes_new[2**8]` | 0.00013016932500991356 | 6.505283624778613e-05 | 50.02% | 100.10% | 2.00x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.4253713678072787e-05 | 2.6699689193749833e-05 | 39.67% | 65.75% | 1.66x | ✅ |
| `hexbytes_new[False]` | 6.0447814747025494e-05 | 2.5479184163827327e-05 | 57.85% | 137.24% | 2.37x | ✅ |
| `hexbytes_new[True]` | 6.055671331296697e-05 | 2.530771265403527e-05 | 58.21% | 139.28% | 2.39x | ✅ |
| `hexbytes_new[all byte values]` | 4.363094568508829e-05 | 2.6518626802900527e-05 | 39.22% | 64.53% | 1.65x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.3279302200535805e-05 | 2.4784985534457725e-05 | 42.73% | 74.62% | 1.75x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.333645140985516e-05 | 2.4670299380401894e-05 | 43.07% | 75.66% | 1.76x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.1821568195431763e-05 | 2.4041479332069095e-05 | 42.51% | 73.96% | 1.74x | ✅ |
| `hexbytes_new[b'']` | 4.1629460633283115e-05 | 2.4789826664125448e-05 | 40.45% | 67.93% | 1.68x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.270308383248408e-05 | 2.403617510991922e-05 | 43.71% | 77.66% | 1.78x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.283946806867427e-05 | 2.396965755693359e-05 | 44.05% | 78.72% | 1.79x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.306159489334051e-05 | 2.4787334486125963e-05 | 42.44% | 73.72% | 1.74x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.469636116543165e-05 | 3.705608890896089e-05 | 32.25% | 47.60% | 1.48x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.2333710914233666e-05 | 2.4074959635262195e-05 | 43.13% | 75.84% | 1.76x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.2923707543200036e-05 | 2.3996789891272066e-05 | 44.09% | 78.87% | 1.79x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.2701961938858575e-05 | 2.374230980856616e-05 | 44.40% | 79.86% | 1.80x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.2220940443155214e-05 | 2.396647877702629e-05 | 43.24% | 76.17% | 1.76x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.295256137293417e-05 | 2.3916203701871075e-05 | 44.32% | 79.60% | 1.80x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.316968527800497e-05 | 2.4789052754981017e-05 | 42.58% | 74.15% | 1.74x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.047981991364906e-05 | 3.212391335836985e-05 | 36.36% | 57.14% | 1.57x | ✅ |
| `hexbytes_new[b'abc']` | 4.303680320127352e-05 | 2.4080193156434217e-05 | 44.05% | 78.72% | 1.79x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.67815702823816e-05 | 3.4608403582447766e-05 | 48.18% | 92.96% | 1.93x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 7.050592864011526e-05 | 3.765212806904608e-05 | 46.60% | 87.26% | 1.87x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 7.021044595083947e-05 | 3.759457281575228e-05 | 46.45% | 86.76% | 1.87x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.928261666574281e-05 | 3.5080977226263746e-05 | 49.37% | 97.49% | 1.97x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.86421714854043e-05 | 3.5161321398316155e-05 | 48.78% | 95.22% | 1.95x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.708792997748016e-05 | 3.4581248942752256e-05 | 48.45% | 94.00% | 1.94x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.640841123191888e-05 | 3.3241292306739966e-05 | 49.94% | 99.78% | 2.00x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.729711322900617e-05 | 3.461337258606117e-05 | 48.57% | 94.43% | 1.94x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.729394377558704e-05 | 3.53356190643641e-05 | 47.49% | 90.44% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.729957460035897e-05 | 3.539451123816474e-05 | 47.41% | 90.14% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 8.856310622247569e-05 | 5.201134563132096e-05 | 41.27% | 70.28% | 1.70x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.799816946485925e-05 | 3.466474857472335e-05 | 49.02% | 96.16% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.787877187459742e-05 | 3.488331902966646e-05 | 48.61% | 94.59% | 1.95x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.699821368968625e-05 | 3.451958552948844e-05 | 48.48% | 94.09% | 1.94x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.687525043612298e-05 | 3.464335617753674e-05 | 48.20% | 93.04% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.768527138711725e-05 | 3.5096244076418545e-05 | 48.15% | 92.86% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.766914934814121e-05 | 3.582644444839094e-05 | 47.06% | 88.88% | 1.89x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.294645434782325e-05 | 4.837002265732563e-05 | 41.69% | 71.48% | 1.71x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.704110707432285e-05 | 3.512952688592064e-05 | 47.60% | 90.84% | 1.91x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.399384660279799e-05 | 4.725469088695743e-05 | 43.74% | 77.75% | 1.78x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.845285098513181e-05 | 3.552658153387931e-05 | 48.10% | 92.68% | 1.93x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.712955602912066e-05 | 4.0168345024694984e-05 | 40.16% | 67.12% | 1.67x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.791921987238057e-05 | 3.447394864686853e-05 | 49.24% | 97.02% | 1.97x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.759867965404624e-05 | 3.479232826708654e-05 | 48.53% | 94.29% | 1.94x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.762369098965522e-05 | 3.4893914888554726e-05 | 48.40% | 93.80% | 1.94x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.859700734604143e-05 | 3.594405076673965e-05 | 47.60% | 90.84% | 1.91x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.758864476159689e-05 | 3.5415781654248135e-05 | 47.60% | 90.84% | 1.91x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.756770446726261e-05 | 3.545314737106491e-05 | 47.53% | 90.58% | 1.91x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.834239549973453e-05 | 3.565282951876378e-05 | 47.83% | 91.69% | 1.92x | ✅ |
| `hexbytes_new[long alternating]` | 5.045347428060053e-05 | 3.191138541337713e-05 | 36.75% | 58.10% | 1.58x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.309032361998223e-05 | 4.203632761778702e-05 | 49.41% | 97.66% | 1.98x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.701128549623039e-05 | 4.547416275499088e-05 | 47.74% | 91.34% | 1.91x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.740294636075455e-05 | 4.5149825019186036e-05 | 48.34% | 93.58% | 1.94x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.326592534549212e-05 | 4.263263154793978e-05 | 48.80% | 95.31% | 1.95x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.315507280608667e-05 | 4.3032347554523156e-05 | 48.25% | 93.24% | 1.93x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.240959863713341e-05 | 4.230277039724871e-05 | 48.67% | 94.81% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.097297649834954e-05 | 4.0648642932373364e-05 | 49.80% | 99.20% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.296448461138768e-05 | 4.211375226024496e-05 | 49.24% | 97.00% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.392296245271437e-05 | 4.214885818902156e-05 | 49.78% | 99.11% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.240833003505793e-05 | 4.3023267406574265e-05 | 47.79% | 91.54% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010433113226020557 | 6.098466127866809e-05 | 41.55% | 71.08% | 1.71x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.294237501091693e-05 | 4.2225264681576965e-05 | 49.09% | 96.43% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.31013482976833e-05 | 4.2191009225721623e-05 | 49.23% | 96.96% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 7.932918379500687e-05 | 4.1591862613828765e-05 | 47.57% | 90.73% | 1.91x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.342751179142933e-05 | 4.177888712548921e-05 | 49.92% | 99.69% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.270459284860866e-05 | 4.209567687494709e-05 | 49.10% | 96.47% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.360995370217106e-05 | 4.305369313526319e-05 | 48.51% | 94.20% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.936083321419774e-05 | 5.65491584023177e-05 | 43.09% | 75.71% | 1.76x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.328208600808902e-05 | 4.2491442964901044e-05 | 48.98% | 96.00% | 1.96x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.946950364296383e-05 | 5.4973236980281356e-05 | 44.73% | 80.94% | 1.81x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.509307291543948e-05 | 4.3118195670599884e-05 | 49.33% | 97.35% | 1.97x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.321391717337989e-05 | 4.189993928436393e-05 | 49.65% | 98.60% | 1.99x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.289977482584501e-05 | 4.1477400063534536e-05 | 49.97% | 99.87% | 2.00x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.427113470692582e-05 | 4.1955716354537444e-05 | 50.21% | 100.86% | 2.01x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.33508606116477e-05 | 4.2176551993592833e-05 | 49.40% | 97.62% | 1.98x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.434925388346671e-05 | 4.3292564824155605e-05 | 48.67% | 94.84% | 1.95x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.507924321478237e-05 | 4.276726004867571e-05 | 49.73% | 98.94% | 1.99x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.453794096588642e-05 | 4.263069584557092e-05 | 49.57% | 98.30% | 1.98x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.181314475613463e-05 | 4.327644987720784e-05 | 47.10% | 89.05% | 1.89x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.254225572060323e-05 | 2.4709914857962898e-05 | 41.92% | 72.17% | 1.72x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.288394455156279e-05 | 2.3993306369790603e-05 | 44.05% | 78.73% | 1.79x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.195263630367094e-05 | 2.3864275848306285e-05 | 43.12% | 75.80% | 1.76x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.206473237730244e-05 | 2.4071144282684772e-05 | 42.78% | 74.75% | 1.75x | ✅ |
| `hexbytes_new[palindrome]` | 4.22623674377518e-05 | 2.38916478448462e-05 | 43.47% | 76.89% | 1.77x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.3088931837474016e-05 | 2.4357965012923714e-05 | 43.47% | 76.90% | 1.77x | ✅ |
| `hexbytes_new[single 0xff]` | 4.158439750868405e-05 | 2.4697282821312537e-05 | 40.61% | 68.38% | 1.68x | ✅ |
| `hexbytes_new[single null byte]` | 4.1492003238957105e-05 | 2.466302664718055e-05 | 40.56% | 68.24% | 1.68x | ✅ |
| `hexbytes_new[two patterns]` | 4.2600280845607965e-05 | 2.4713805520082544e-05 | 41.99% | 72.37% | 1.72x | ✅ |
| `hexbytes_repr[0-9]` | 3.375793278988524e-05 | 1.5214685751411995e-05 | 54.93% | 121.88% | 2.22x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012426590869985316 | 4.184414863700043e-05 | 66.33% | 196.97% | 2.97x | ✅ |
| `hexbytes_repr[all byte values]` | 0.0001244853561487603 | 4.19392149648498e-05 | 66.31% | 196.82% | 2.97x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.385929922848645e-05 | 2.0681735402760627e-05 | 61.60% | 160.42% | 2.60x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.381109716940459e-05 | 2.065496132898946e-05 | 61.62% | 160.52% | 2.61x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.521349127106887e-05 | 1.880979653262755e-05 | 58.40% | 140.37% | 2.40x | ✅ |
| `hexbytes_repr[b'']` | 2.510519867082661e-05 | 1.1872169736209169e-05 | 52.71% | 111.46% | 2.11x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 4.1406792307613374e-05 | 1.726349616555666e-05 | 58.31% | 139.85% | 2.40x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 3.233164045013589e-05 | 1.4416750597543367e-05 | 55.41% | 124.26% | 2.24x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.66275911977096e-05 | 2.401502717305572e-05 | 63.96% | 177.44% | 2.77x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0008010996042682419 | 0.00022424412722395779 | 72.01% | 257.24% | 3.57x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 3.1344231212002164e-05 | 1.4581741305471623e-05 | 53.48% | 114.96% | 2.15x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 3.252982389646346e-05 | 1.4513802461439128e-05 | 55.38% | 124.13% | 2.24x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.3205647366561166e-05 | 1.5001715676978286e-05 | 54.82% | 121.35% | 2.21x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.334368305626002e-05 | 1.5120970654844163e-05 | 54.65% | 120.51% | 2.21x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 3.803244323518497e-05 | 1.4358539284287921e-05 | 62.25% | 164.88% | 2.65x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.3900494506572344e-05 | 2.067724444248325e-05 | 61.64% | 160.68% | 2.61x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.0004058160927528044 | 0.00012298503393298252 | 69.69% | 229.97% | 3.30x | ✅ |
| `hexbytes_repr[b'abc']` | 3.1574004854752566e-05 | 1.4475180674159015e-05 | 54.15% | 118.13% | 2.18x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0004068748792698114 | 0.00012294162423073243 | 69.78% | 230.95% | 3.31x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.00010222755919411688 | 3.567224333238284e-05 | 65.11% | 186.57% | 2.87x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.3827988892503576e-05 | 1.549941750834813e-05 | 54.18% | 118.25% | 2.18x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.31493932346051e-05 | 1.4787222364324024e-05 | 55.39% | 124.18% | 2.24x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 3.25834947185746e-05 | 1.4517124981829057e-05 | 55.45% | 124.45% | 2.24x | ✅ |
| `hexbytes_repr[palindrome]` | 3.700056942010565e-05 | 1.6279984929396235e-05 | 56.00% | 127.28% | 2.27x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.664697665937363e-05 | 2.406057199477673e-05 | 63.90% | 177.00% | 2.77x | ✅ |
| `hexbytes_repr[single 0xff]` | 3.0341623204497867e-05 | 1.4367153815077527e-05 | 52.65% | 111.19% | 2.11x | ✅ |
| `hexbytes_repr[single null byte]` | 3.0485715680050766e-05 | 1.4230033966613931e-05 | 53.32% | 114.24% | 2.14x | ✅ |
| `hexbytes_repr[two patterns]` | 5.362560761268452e-05 | 2.065877750222887e-05 | 61.48% | 159.58% | 2.60x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.7245879979526416e-05 | 1.4324147812493452e-05 | 16.94% | 20.40% | 1.20x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.4293908994725395e-05 | 4.0607603313638156e-05 | 8.32% | 9.08% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.403032831478932e-05 | 4.062698936165291e-05 | 7.73% | 8.38% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.2477136200012804e-05 | 1.9576178597063882e-05 | 12.91% | 14.82% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.248107472201031e-05 | 1.9516732901000608e-05 | 13.19% | 15.19% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.0576049721817285e-05 | 1.7632192714451083e-05 | 14.31% | 16.70% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 9.670796693231544e-06 | 1.1103075691547141e-05 | -14.81% | -12.90% | 0.87x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.911247147170023e-05 | 1.6344448042850526e-05 | 14.48% | 16.94% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.6574401072848958e-05 | 1.3738392140288972e-05 | 17.11% | 20.64% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.6066572665197056e-05 | 2.3044674391880324e-05 | 11.59% | 13.11% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022543200494645337 | 0.00022266065375826504 | 1.23% | 1.24% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.6225171479431476e-05 | 1.36881283887396e-05 | 15.64% | 18.53% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.6696439013745873e-05 | 1.3811738348068516e-05 | 17.28% | 20.89% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.6994174796276767e-05 | 1.4152143448166215e-05 | 16.72% | 20.08% | 1.20x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.6928855364183672e-05 | 1.4007592107642005e-05 | 17.26% | 20.85% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.6603076686462214e-05 | 1.3605196964883213e-05 | 18.06% | 22.03% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.242160914682916e-05 | 1.973953692882472e-05 | 11.96% | 13.59% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.0001249559497769379 | 0.0001217235916850383 | 2.59% | 2.66% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.6232620675239787e-05 | 1.3532781452488917e-05 | 16.63% | 19.95% | 1.20x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012422103982708641 | 0.00012122713307201087 | 2.41% | 2.47% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.6437390853862734e-05 | 3.341904687682268e-05 | 8.28% | 9.03% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.7194553513970872e-05 | 1.4303062255355542e-05 | 16.82% | 20.22% | 1.20x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.8144903320023977e-05 | 1.3880320730176454e-05 | 23.50% | 30.72% | 1.31x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.681706493043026e-05 | 1.3710896040285717e-05 | 18.47% | 22.65% | 1.23x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.775620914874341e-05 | 1.5149407308539039e-05 | 14.68% | 17.21% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.6258418097590327e-05 | 2.2976067292305176e-05 | 12.50% | 14.29% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.5964381395681145e-05 | 1.3283631167654686e-05 | 16.79% | 20.18% | 1.20x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.608128652721685e-05 | 1.3299904365992852e-05 | 17.30% | 20.91% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.2538149474180358e-05 | 1.9640607095833005e-05 | 12.86% | 14.75% | 1.15x | ✅ |
