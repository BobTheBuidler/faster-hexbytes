#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/renovate/actions-cache-5.x/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/renovate/actions-cache-5.x/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.699727503962646e-05 | 2.5983460165269406e-05 | 3.76% | 3.90% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.693638748392208e-05 | 2.55377921235037e-05 | 5.19% | 5.48% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.6992376534646184e-05 | 2.5477327972398046e-05 | 5.61% | 5.95% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.6968607005780797e-05 | 2.5834129948950648e-05 | 4.21% | 4.39% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.702762564371693e-05 | 2.594850524369552e-05 | 3.99% | 4.16% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.709813025524448e-05 | 2.5540991263844014e-05 | 5.75% | 6.10% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.6566595586082547e-05 | 2.5698292682110637e-05 | 3.27% | 3.38% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.692524161891994e-05 | 2.52291413512653e-05 | 6.30% | 6.72% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.69978564113578e-05 | 2.565106531508782e-05 | 4.99% | 5.25% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.7066037143747552e-05 | 2.570420599159694e-05 | 5.03% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.68358789060276e-05 | 2.553968431784856e-05 | 4.83% | 5.08% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6916842022605803e-05 | 2.5789368564832157e-05 | 4.19% | 4.37% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.712485628043835e-05 | 2.5581414989060586e-05 | 5.69% | 6.03% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.6832010050447995e-05 | 2.5586152272227798e-05 | 4.64% | 4.87% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.6847027947868912e-05 | 2.5761153360508852e-05 | 4.04% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.6975634491712447e-05 | 2.565046929939195e-05 | 4.91% | 5.17% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.697522615055869e-05 | 2.5692821990784565e-05 | 4.75% | 4.99% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.6885769806465386e-05 | 2.5663079519517786e-05 | 4.55% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.6924885047256964e-05 | 2.536522529469315e-05 | 5.79% | 6.15% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.6926387156228625e-05 | 2.5569546201910966e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.699391531262567e-05 | 2.5888990821724096e-05 | 4.09% | 4.27% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.6888879459882544e-05 | 2.5564141620133892e-05 | 4.93% | 5.18% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.6716581619357453e-05 | 2.552823578823156e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.6743447186939193e-05 | 2.567693090955475e-05 | 3.99% | 4.15% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.6881517679296635e-05 | 2.54681503311463e-05 | 5.26% | 5.55% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.6856365307407783e-05 | 2.553108234984487e-05 | 4.93% | 5.19% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.591915223359313e-05 | 2.454018014354942e-05 | 5.32% | 5.62% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.5909035864967624e-05 | 2.4609112343195156e-05 | 5.02% | 5.28% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.6142768761893724e-05 | 2.470201314531017e-05 | 5.51% | 5.83% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.600438658315571e-05 | 2.444400451806199e-05 | 6.00% | 6.38% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.614880910713345e-05 | 2.516573089358997e-05 | 3.76% | 3.91% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.6061707065353333e-05 | 2.5134003580534012e-05 | 3.56% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.6111139306952585e-05 | 2.463598726308833e-05 | 5.65% | 5.99% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.6033059836301407e-05 | 2.4498590528569524e-05 | 5.89% | 6.26% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.6134293190325344e-05 | 2.5058441460972077e-05 | 4.12% | 4.29% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.580491838913108e-05 | 2.512376949501845e-05 | 2.64% | 2.71% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.5987921522915007e-05 | 2.506974994442258e-05 | 3.53% | 3.66% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.5876433810119782e-05 | 2.518281674344415e-05 | 2.68% | 2.75% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.587908886019632e-05 | 2.5204058955665485e-05 | 2.61% | 2.68% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.6047699092049756e-05 | 2.501989332705106e-05 | 3.95% | 4.11% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.630721342297065e-05 | 2.5087679376945433e-05 | 4.64% | 4.86% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.6021461263141808e-05 | 2.521907021887552e-05 | 3.08% | 3.18% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.591296958560726e-05 | 2.5113546682423466e-05 | 3.09% | 3.18% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.603711049230518e-05 | 2.4925129686078367e-05 | 4.27% | 4.46% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.5996356883163924e-05 | 2.4589419268489875e-05 | 5.41% | 5.72% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.6091162408754835e-05 | 2.5201996705731805e-05 | 3.41% | 3.53% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.5927857254370928e-05 | 2.4557921777780203e-05 | 5.28% | 5.58% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.6169872502159903e-05 | 2.5205445675648615e-05 | 3.69% | 3.83% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.598607998246238e-05 | 2.52932023158331e-05 | 2.67% | 2.74% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.627731289012721e-05 | 2.5112051005579727e-05 | 4.43% | 4.64% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.5958216773669786e-05 | 2.4611302319915923e-05 | 5.19% | 5.47% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.5970749349540966e-05 | 2.51452198253294e-05 | 3.18% | 3.28% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.5961860578279425e-05 | 2.4599877376358025e-05 | 5.25% | 5.54% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.5720356731054094e-05 | 2.460233827283249e-05 | 4.35% | 4.54% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.6081738486115883e-05 | 2.5281443329658697e-05 | 3.07% | 3.17% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.6247234441232437e-05 | 2.5154962913131602e-05 | 4.16% | 4.34% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.601616101421203e-05 | 2.525915718152239e-05 | 2.91% | 3.00% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.5929454341025677e-05 | 2.5238051488753868e-05 | 2.67% | 2.74% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.58442938286202e-05 | 2.521546684450593e-05 | 2.43% | 2.49% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.623437160465842e-05 | 2.5297281736827737e-05 | 3.57% | 3.70% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.5891175793206946e-05 | 2.4659937576808043e-05 | 4.76% | 4.99% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.591360075264841e-05 | 2.5185785648572536e-05 | 2.81% | 2.89% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.611573162718155e-05 | 2.514506200317367e-05 | 3.72% | 3.86% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.6325472090697788e-05 | 2.5164550662094548e-05 | 4.41% | 4.61% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.6034971182799415e-05 | 2.5256257060545783e-05 | 2.99% | 3.08% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.601697927974342e-05 | 2.5287041452472877e-05 | 2.81% | 2.89% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.605794220841303e-05 | 2.5068974954720294e-05 | 3.80% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.598681790153769e-05 | 2.5276289965630977e-05 | 2.73% | 2.81% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.6069470563906513e-05 | 2.517455376459807e-05 | 3.43% | 3.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.6023371679786684e-05 | 2.5211697157337e-05 | 3.12% | 3.22% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.5936296622463615e-05 | 2.521887768588549e-05 | 2.77% | 2.84% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.60362483686851e-05 | 2.516614740443142e-05 | 3.34% | 3.46% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.6161180911483564e-05 | 2.51960200397083e-05 | 3.69% | 3.83% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.6341437043932383e-05 | 2.5243184719915256e-05 | 4.17% | 4.35% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.6030913529174724e-05 | 2.5299450148181682e-05 | 2.81% | 2.89% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.6662160781702727e-05 | 2.518848860101151e-05 | 5.53% | 5.85% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.615239779766123e-05 | 2.5261543234748967e-05 | 3.41% | 3.53% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.599002155783108e-05 | 2.5125174514932884e-05 | 3.33% | 3.44% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.6539706484285747e-05 | 2.525018459322319e-05 | 4.86% | 5.11% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.6130172088889876e-05 | 2.5266809675031592e-05 | 3.30% | 3.42% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.6002099506550626e-05 | 2.517009607285943e-05 | 3.20% | 3.31% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.6066200472401897e-05 | 2.5236228834224377e-05 | 3.18% | 3.29% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.605192127099787e-05 | 2.5226391184172767e-05 | 3.17% | 3.27% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.600591506422704e-05 | 2.4586529350716664e-05 | 5.46% | 5.77% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.6087238085002416e-05 | 2.5153166187046097e-05 | 3.58% | 3.71% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.6033157047146703e-05 | 2.522326680836045e-05 | 3.11% | 3.21% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.6101271601842202e-05 | 2.5073154377419745e-05 | 3.94% | 4.10% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.590285610028813e-05 | 2.4986769724835642e-05 | 3.54% | 3.67% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.6477207603416948e-05 | 2.5183861595570378e-05 | 4.88% | 5.14% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.6079921015703613e-05 | 2.5068033210460692e-05 | 3.88% | 4.04% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.6147387332308502e-05 | 2.5061307044421914e-05 | 4.15% | 4.33% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.5980602974294835e-05 | 2.499326270035764e-05 | 3.80% | 3.95% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.6082506693672343e-05 | 2.5003081369548748e-05 | 4.14% | 4.32% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.599538424053493e-05 | 2.5051491443019896e-05 | 3.63% | 3.77% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.6227228311882822e-05 | 2.5129644884413783e-05 | 4.18% | 4.37% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.6100452816347638e-05 | 2.5428809356769343e-05 | 2.57% | 2.64% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.6128083480582352e-05 | 2.5298354510462013e-05 | 3.18% | 3.28% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.6050426375128224e-05 | 2.537331144940049e-05 | 2.60% | 2.67% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.5878595697643745e-05 | 2.4832435741387676e-05 | 4.04% | 4.21% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.6046469284714683e-05 | 2.490709643254988e-05 | 4.37% | 4.57% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.6112874614028838e-05 | 2.5140775183470057e-05 | 3.72% | 3.87% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.5896278243691546e-05 | 2.5260649627929733e-05 | 2.45% | 2.52% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.6066276451356027e-05 | 2.5294066865552292e-05 | 2.96% | 3.05% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.5919990609096353e-05 | 2.5237597272443142e-05 | 2.63% | 2.70% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.614460547544196e-05 | 2.519230839788179e-05 | 3.64% | 3.78% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.604745335819696e-05 | 2.4541059764727043e-05 | 5.78% | 6.14% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.597828560359618e-05 | 2.525776106718419e-05 | 2.77% | 2.85% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.6161918594132884e-05 | 2.5110418257083887e-05 | 4.02% | 4.19% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.621600966734775e-05 | 2.5197813874677182e-05 | 3.88% | 4.04% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.598509654255663e-05 | 2.530786632135371e-05 | 2.61% | 2.68% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.593101160453263e-05 | 2.5217792326659607e-05 | 2.75% | 2.83% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.5828347046750035e-05 | 2.5018462007056845e-05 | 3.14% | 3.24% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.618212022232069e-05 | 2.4685597156779207e-05 | 5.72% | 6.06% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.5892866480806033e-05 | 2.514719626985307e-05 | 2.88% | 2.97% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.5897577544986495e-05 | 2.5133900187970282e-05 | 2.95% | 3.04% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.5683445178938243e-05 | 2.525074086720563e-05 | 1.68% | 1.71% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.591037740829865e-05 | 2.522090837472885e-05 | 2.66% | 2.73% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.590729718046152e-05 | 2.5373392624890976e-05 | 2.06% | 2.10% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.5942472851162468e-05 | 2.5237743012598502e-05 | 2.72% | 2.79% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.5995877308634886e-05 | 2.4942202754818942e-05 | 4.05% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.5926417438726976e-05 | 2.500822999263278e-05 | 3.54% | 3.67% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.5788322434037414e-05 | 2.5073169684631887e-05 | 2.77% | 2.85% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.6163141817999577e-05 | 2.535333099605691e-05 | 3.10% | 3.19% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.5940757593088827e-05 | 2.5053899503921203e-05 | 3.42% | 3.54% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.6172242005339572e-05 | 2.518910629297519e-05 | 3.76% | 3.90% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.626956330346316e-05 | 2.507370103785276e-05 | 4.55% | 4.77% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.6155926714537007e-05 | 2.511348053252968e-05 | 3.99% | 4.15% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.6158708538991434e-05 | 2.5145211245198584e-05 | 3.87% | 4.03% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.601771888326188e-05 | 2.5107249093626607e-05 | 3.50% | 3.63% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.5902769432190298e-05 | 2.5051572533420173e-05 | 3.29% | 3.40% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.613877661960736e-05 | 2.496799182907956e-05 | 4.48% | 4.69% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.6336753960731437e-05 | 2.4531204143968307e-05 | 6.86% | 7.36% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.6167420112187113e-05 | 2.532147631870174e-05 | 3.23% | 3.34% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.6244339162414884e-05 | 2.4570007990585373e-05 | 6.38% | 6.81% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.6117254262419798e-05 | 2.5162614665717224e-05 | 3.66% | 3.79% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.5849513994863134e-05 | 2.5129845515406854e-05 | 2.78% | 2.86% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.587249802630655e-05 | 2.4765574198558995e-05 | 4.28% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.5976104218447064e-05 | 2.5214602589951322e-05 | 2.93% | 3.02% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.588307556545801e-05 | 2.5145118660355278e-05 | 2.85% | 2.93% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6021719367826402e-05 | 2.5157249546301144e-05 | 3.32% | 3.44% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.6082306553714395e-05 | 2.5215905432305918e-05 | 3.32% | 3.44% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.6343852860678935e-05 | 2.5199680754752876e-05 | 4.34% | 4.54% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.6235603753676735e-05 | 2.5330838101328443e-05 | 3.45% | 3.57% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.6032226103604417e-05 | 2.5186698231394356e-05 | 3.25% | 3.36% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.595484475772878e-05 | 2.4717794028369088e-05 | 4.77% | 5.00% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.6188945637144836e-05 | 2.5178476955221996e-05 | 3.86% | 4.01% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.605221018612578e-05 | 2.5182088888591702e-05 | 3.34% | 3.46% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.6241512424113468e-05 | 2.521139744065936e-05 | 3.93% | 4.09% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.602090816554692e-05 | 2.5256371924883212e-05 | 2.94% | 3.03% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.6108700179382408e-05 | 2.528814946705485e-05 | 3.14% | 3.24% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.5813078348838896e-05 | 2.5189042963728284e-05 | 2.42% | 2.48% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.6138143206143046e-05 | 2.4664242937466225e-05 | 5.64% | 5.98% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.6076107916167846e-05 | 2.511657311821703e-05 | 3.68% | 3.82% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.58391820169551e-05 | 2.534322258061912e-05 | 1.92% | 1.96% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.5954282671643846e-05 | 2.5140375548723782e-05 | 3.14% | 3.24% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.6092090207450718e-05 | 2.5466064271074743e-05 | 2.40% | 2.46% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.631626090249781e-05 | 2.5123624193779563e-05 | 4.53% | 4.75% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.620957747789923e-05 | 2.5092457434653798e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.6021517385545028e-05 | 2.457315610459406e-05 | 5.57% | 5.89% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.5875190836011082e-05 | 2.532149083802445e-05 | 2.14% | 2.19% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.5770538448919738e-05 | 2.5148702125777532e-05 | 2.41% | 2.47% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.618774318579974e-05 | 2.5142678206359414e-05 | 3.99% | 4.16% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.6069389922676525e-05 | 2.5046759305688366e-05 | 3.92% | 4.08% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.6120867519051947e-05 | 2.5220559471674666e-05 | 3.45% | 3.57% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.5987999198425454e-05 | 2.5003981683383805e-05 | 3.79% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.6095985685700467e-05 | 2.5175641099286768e-05 | 3.53% | 3.66% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.6573662925652057e-05 | 2.519739563216759e-05 | 5.18% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.5986159053203332e-05 | 2.5236729283401836e-05 | 2.88% | 2.97% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.6031660246777104e-05 | 2.5039911404306357e-05 | 3.81% | 3.96% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.601001052643045e-05 | 2.5218209749436144e-05 | 3.04% | 3.14% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.606196940382849e-05 | 2.4987967328353106e-05 | 4.12% | 4.30% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.6329092580243112e-05 | 2.5274605390965818e-05 | 4.01% | 4.17% | 1.04x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.219907684460432e-05 | 6.048023483751234e-05 | 26.42% | 35.91% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.184909123737923e-05 | 5.99470211634857e-05 | 26.76% | 36.54% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.20546170716301e-05 | 6.018102447523728e-05 | 26.66% | 36.35% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.230852402039019e-05 | 6.035914028185589e-05 | 26.67% | 36.36% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.174705002374514e-05 | 5.98908796659738e-05 | 26.74% | 36.49% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.215001450355552e-05 | 6.010336463506342e-05 | 26.84% | 36.68% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.843921790639495e-05 | 5.7931706359757806e-05 | 26.14% | 35.40% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.131370501779946e-05 | 6.060622736560311e-05 | 25.47% | 34.17% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.232282536871476e-05 | 6.088103098945491e-05 | 26.05% | 35.22% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.220315885459812e-05 | 5.953322930033165e-05 | 27.58% | 38.08% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.227031235735566e-05 | 5.981255099399179e-05 | 27.30% | 37.55% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.213511523684311e-05 | 6.031755970024746e-05 | 26.56% | 36.17% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.170636010756602e-05 | 5.990024203095307e-05 | 26.69% | 36.40% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.219456727838538e-05 | 6.0201479061085176e-05 | 26.76% | 36.53% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.379272058975718e-05 | 5.980954387870743e-05 | 28.62% | 40.10% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.195625167085577e-05 | 5.9966270252164995e-05 | 26.83% | 36.67% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.171745131897857e-05 | 6.015793140306621e-05 | 26.38% | 35.84% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.213888348458214e-05 | 6.020034501353336e-05 | 26.71% | 36.44% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.185984891822691e-05 | 5.9919909924443966e-05 | 26.80% | 36.62% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.14044831798621e-05 | 6.004439248572489e-05 | 26.24% | 35.57% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.156014601347495e-05 | 6.080776558884481e-05 | 25.44% | 34.13% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.223864537918897e-05 | 5.9977974470783294e-05 | 27.07% | 37.11% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.181807877824232e-05 | 5.8871389673055846e-05 | 28.05% | 38.98% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.233642878833778e-05 | 5.9758392729002035e-05 | 27.42% | 37.78% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.281008815885632e-05 | 6.045148966234521e-05 | 27.00% | 36.99% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.21926597294674e-05 | 6.005869479527686e-05 | 26.93% | 36.85% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.823235425931145e-05 | 5.7534890532068757e-05 | 26.46% | 35.97% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.899284398920457e-05 | 5.768709638937616e-05 | 26.97% | 36.93% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.232171615642792e-05 | 6.140967376413116e-05 | 25.40% | 34.05% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.145857990673162e-05 | 6.0610569772289405e-05 | 25.59% | 34.40% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.253450892771039e-05 | 6.017211758025081e-05 | 27.09% | 37.16% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.277503661032044e-05 | 6.0348406589153824e-05 | 27.09% | 37.16% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.242830059772601e-05 | 6.0654904240992974e-05 | 26.41% | 35.90% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.297112012638398e-05 | 6.088130409184248e-05 | 26.62% | 36.28% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.239613461898725e-05 | 6.0364909949439976e-05 | 26.74% | 36.50% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.852976850377031e-05 | 5.806623849915128e-05 | 26.06% | 35.24% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.247282317288108e-05 | 6.0433819508333856e-05 | 26.72% | 36.47% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.226233306368182e-05 | 6.074328949585592e-05 | 26.16% | 35.43% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.278297560541523e-05 | 6.153044006103187e-05 | 25.67% | 34.54% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.240948058435003e-05 | 6.0660479500457696e-05 | 26.39% | 35.85% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.308496456093813e-05 | 6.010040576206407e-05 | 27.66% | 38.24% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.34911575905163e-05 | 6.054994119172624e-05 | 27.48% | 37.89% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.307131310312632e-05 | 6.0910045711774424e-05 | 26.68% | 36.38% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.268347195385097e-05 | 6.106592925302094e-05 | 26.14% | 35.40% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.260318382189851e-05 | 6.151387421045364e-05 | 25.53% | 34.28% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.364580759091724e-05 | 6.027434827230218e-05 | 27.94% | 38.78% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.36738537145235e-05 | 6.09305463080695e-05 | 27.18% | 37.33% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.280286663801345e-05 | 5.983272382886673e-05 | 27.74% | 38.39% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.202941548339298e-05 | 6.114019449218618e-05 | 25.47% | 34.17% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.269507716151938e-05 | 5.9846395495348815e-05 | 27.63% | 38.18% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.373461293615644e-05 | 6.0980896673742976e-05 | 27.17% | 37.31% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.262031758801085e-05 | 6.0309177779835336e-05 | 27.00% | 36.99% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.251302597421628e-05 | 6.0640539347870885e-05 | 26.51% | 36.07% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.300187547654533e-05 | 6.0485098189358555e-05 | 27.13% | 37.23% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.258894353127212e-05 | 6.041160964097967e-05 | 26.85% | 36.71% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.883063934597907e-05 | 5.7852322093093897e-05 | 26.61% | 36.26% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.895586952968562e-05 | 5.820857976758761e-05 | 26.28% | 35.64% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.277039928981647e-05 | 6.107791613425771e-05 | 26.21% | 35.52% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.265656277656981e-05 | 6.043713440804762e-05 | 26.88% | 36.76% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.240675593924607e-05 | 6.059736957959086e-05 | 26.47% | 35.99% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.262409733216392e-05 | 6.050656192507028e-05 | 26.77% | 36.55% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.250765692216365e-05 | 6.0836510096460193e-05 | 26.27% | 35.62% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.225907084312374e-05 | 6.12420603149092e-05 | 25.55% | 34.32% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.238011056433733e-05 | 6.0599978262652546e-05 | 26.44% | 35.94% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.963594976640695e-05 | 5.781499898099171e-05 | 27.40% | 37.74% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.184222922142355e-05 | 6.0785419102643745e-05 | 25.73% | 34.64% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.244709143457933e-05 | 6.001587790116682e-05 | 27.21% | 37.38% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.241275579155016e-05 | 6.0657147920679204e-05 | 26.40% | 35.87% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.301901893970455e-05 | 6.08313289404695e-05 | 26.73% | 36.47% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.17135309869557e-05 | 6.0698586008978404e-05 | 25.72% | 34.62% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.265582608732634e-05 | 6.061774261844591e-05 | 26.66% | 36.36% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.240474691151717e-05 | 6.002329907352388e-05 | 27.16% | 37.29% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.202150105032423e-05 | 6.0588960807785556e-05 | 26.13% | 35.37% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.252130057867216e-05 | 5.9945141114376426e-05 | 27.36% | 37.66% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.169372117778727e-05 | 6.059455718733286e-05 | 25.83% | 34.82% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.226892663208224e-05 | 6.241779829544348e-05 | 24.13% | 31.80% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.155418620203896e-05 | 6.029674934605839e-05 | 26.07% | 35.25% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.244396667821586e-05 | 6.054884539582123e-05 | 26.56% | 36.16% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.239743773572464e-05 | 6.0340368131528145e-05 | 26.77% | 36.55% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.217391697867943e-05 | 6.0716746862524285e-05 | 26.11% | 35.34% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.255792944603162e-05 | 5.967218983225484e-05 | 27.72% | 38.35% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.224299656237795e-05 | 6.090809117519411e-05 | 25.94% | 35.03% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.022208968339602e-05 | 6.037199484393644e-05 | 24.74% | 32.88% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.230964105994306e-05 | 6.0708658991297636e-05 | 26.24% | 35.58% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 8.068630529337576e-05 | 5.8658365817758755e-05 | 27.30% | 37.55% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 7.995867168146118e-05 | 5.846362697963228e-05 | 26.88% | 36.77% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.235836272437885e-05 | 6.029590015646999e-05 | 26.79% | 36.59% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.045324698113042e-05 | 5.945095732045082e-05 | 26.10% | 35.33% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.094469145136043e-05 | 6.103242654312416e-05 | 24.60% | 32.63% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.195637485411605e-05 | 6.0518891505063245e-05 | 26.16% | 35.42% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.168884171331588e-05 | 5.983096378328387e-05 | 26.76% | 36.53% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.08722469449512e-05 | 5.916347869219602e-05 | 26.84% | 36.69% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.147110676126405e-05 | 6.032563282113791e-05 | 25.95% | 35.05% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.877830256391665e-05 | 5.728826530035935e-05 | 27.28% | 37.51% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.27501089428572e-05 | 5.906903834181447e-05 | 28.62% | 40.09% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.163080023491666e-05 | 5.94303807043473e-05 | 27.20% | 37.36% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.156841748386184e-05 | 5.851798852992217e-05 | 28.26% | 39.39% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010371694891850186 | 7.849843704456531e-05 | 24.31% | 32.13% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.800648836125875e-05 | 5.6794586390036434e-05 | 27.19% | 37.35% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.174364823489009e-05 | 5.9520774607827336e-05 | 27.19% | 37.34% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.140754157507624e-05 | 5.9957134868647414e-05 | 26.35% | 35.78% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.249251480865906e-05 | 5.9087042838739085e-05 | 28.37% | 39.61% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.121973417179306e-05 | 5.884028358435524e-05 | 27.55% | 38.03% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.421785997269728e-05 | 5.883209948746382e-05 | 30.14% | 43.15% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.807126091776214e-05 | 7.258875462566953e-05 | 25.98% | 35.11% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.829527585678038e-05 | 5.72713120211849e-05 | 26.85% | 36.71% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.834157360098588e-05 | 7.359852100440467e-05 | 25.16% | 33.62% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.162776418269813e-05 | 6.0375407081451675e-05 | 26.04% | 35.20% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.1005911176687e-05 | 5.992175331079819e-05 | 26.03% | 35.19% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.080839810086362e-05 | 6.058098787330012e-05 | 25.03% | 33.39% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.168904299809145e-05 | 5.984878775915031e-05 | 26.74% | 36.49% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.122496377089892e-05 | 5.867623785382204e-05 | 27.76% | 38.43% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.293376284118978e-05 | 6.034867040368679e-05 | 27.23% | 37.42% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.788374891178644e-05 | 5.83127668092839e-05 | 25.13% | 33.56% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.79749348197529e-05 | 5.75533871019221e-05 | 26.19% | 35.48% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.123954831197056e-05 | 6.053552886250931e-05 | 25.49% | 34.20% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.968589814969216e-05 | 5.864719264356952e-05 | 26.40% | 35.87% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.057465686252546e-05 | 6.255454785878107e-05 | 22.36% | 28.81% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.06301396186505e-05 | 6.0593607372830985e-05 | 24.85% | 33.07% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.024090298203668e-05 | 5.98538226872015e-05 | 25.41% | 34.06% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.02342309935449e-05 | 6.0439239304157465e-05 | 24.67% | 32.75% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.816024633129417e-05 | 5.861350556624658e-05 | 25.01% | 33.35% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.71688372760005e-05 | 5.6889358868446594e-05 | 26.28% | 35.65% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.914963904631298e-05 | 5.8607331331052814e-05 | 25.95% | 35.05% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.967264232509239e-05 | 5.843208655150645e-05 | 26.66% | 36.35% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.000823406010934e-05 | 5.8561402801836825e-05 | 26.81% | 36.62% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010180898955551367 | 7.823865003674342e-05 | 23.15% | 30.13% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.003797304989139e-05 | 5.858779058088754e-05 | 26.80% | 36.61% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.957847222052548e-05 | 5.907810648107464e-05 | 25.76% | 34.70% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.91172058463664e-05 | 5.8684703099977696e-05 | 25.83% | 34.82% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.943633710828328e-05 | 6.386773752488503e-05 | 19.60% | 24.38% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.977029209971493e-05 | 5.866068605484107e-05 | 26.46% | 35.99% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.970439437185622e-05 | 5.878340651336695e-05 | 26.25% | 35.59% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.702536477007442e-05 | 7.140545043560361e-05 | 26.41% | 35.88% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.039441594138693e-05 | 5.892047128975056e-05 | 26.71% | 36.45% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.640834639384666e-05 | 7.178475476355708e-05 | 25.54% | 34.30% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.033229841970675e-05 | 5.895028644142629e-05 | 26.62% | 36.27% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.940618086150258e-05 | 5.8225263928934316e-05 | 26.67% | 36.38% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.90832572381982e-05 | 5.825975755552735e-05 | 26.33% | 35.74% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.93702719778249e-05 | 5.905967145642103e-05 | 25.59% | 34.39% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.976452040513442e-05 | 5.837829092078062e-05 | 26.81% | 36.63% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.96548530495941e-05 | 5.8212630356305515e-05 | 26.92% | 36.83% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.66486320376117e-05 | 5.79101656267503e-05 | 24.45% | 32.36% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.681518539848063e-05 | 5.673197214062149e-05 | 26.14% | 35.40% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.051676543371308e-05 | 5.844050875728255e-05 | 27.42% | 37.78% | 1.38x | ✅ |
| `hexbytes_new['']` | 7.279979111868738e-05 | 3.460842475240556e-05 | 52.46% | 110.35% | 2.10x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 8.88287204802429e-05 | 5.245729903902569e-05 | 40.95% | 69.34% | 1.69x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.175807248027441e-05 | 4.9180072879090864e-05 | 46.40% | 86.58% | 1.87x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.751303363882393e-05 | 4.5657973519008944e-05 | 47.83% | 91.67% | 1.92x | ✅ |
| `hexbytes_new['0x']` | 7.648265654306101e-05 | 3.521233585290622e-05 | 53.96% | 117.20% | 2.17x | ✅ |
| `hexbytes_new['0x1234']` | 8.527676789781265e-05 | 4.305616760797308e-05 | 49.51% | 98.06% | 1.98x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.509647763703062e-05 | 4.322118750582482e-05 | 49.21% | 96.89% | 1.97x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.557396695464055e-05 | 4.3498599784535334e-05 | 49.17% | 96.73% | 1.97x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.535144743252634e-05 | 4.3350551843990924e-05 | 49.21% | 96.89% | 1.97x | ✅ |
| `hexbytes_new['abc']` | 8.359409825386842e-05 | 4.573681347577724e-05 | 45.29% | 82.77% | 1.83x | ✅ |
| `hexbytes_new['deadbeef']` | 7.5935331688064e-05 | 3.939081963297877e-05 | 48.13% | 92.77% | 1.93x | ✅ |
| `hexbytes_new[0-9]` | 4.236142217256423e-05 | 2.4094638139618726e-05 | 43.12% | 75.81% | 1.76x | ✅ |
| `hexbytes_new[0]` | 0.0001265539204697729 | 6.157083337834678e-05 | 51.35% | 105.54% | 2.06x | ✅ |
| `hexbytes_new[123456]` | 0.00012763762416694773 | 6.658593478248978e-05 | 47.83% | 91.69% | 1.92x | ✅ |
| `hexbytes_new[2**16]` | 0.00012754355171023412 | 6.622100268344947e-05 | 48.08% | 92.60% | 1.93x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013290562746747276 | 7.209262390749e-05 | 45.76% | 84.35% | 1.84x | ✅ |
| `hexbytes_new[2**32]` | 0.00013096501667989686 | 6.915207536037227e-05 | 47.20% | 89.39% | 1.89x | ✅ |
| `hexbytes_new[2**64]` | 0.00013328642639796014 | 7.040055437055335e-05 | 47.18% | 89.33% | 1.89x | ✅ |
| `hexbytes_new[2**8]` | 0.0001274498134671033 | 6.523687273772894e-05 | 48.81% | 95.36% | 1.95x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.404799330043237e-05 | 2.518688010938966e-05 | 42.82% | 74.88% | 1.75x | ✅ |
| `hexbytes_new[False]` | 6.068177294515293e-05 | 2.527693615031032e-05 | 58.35% | 140.07% | 2.40x | ✅ |
| `hexbytes_new[True]` | 6.020727593040597e-05 | 2.5230142637017365e-05 | 58.09% | 138.63% | 2.39x | ✅ |
| `hexbytes_new[all byte values]` | 4.4653820844067475e-05 | 2.5069551846584058e-05 | 43.86% | 78.12% | 1.78x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.42127631020855e-05 | 2.4656057257599072e-05 | 44.23% | 79.32% | 1.79x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.41016406193076e-05 | 2.470813280191287e-05 | 43.97% | 78.49% | 1.78x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.292823617102208e-05 | 2.398667287491426e-05 | 44.12% | 78.97% | 1.79x | ✅ |
| `hexbytes_new[b'']` | 4.2248971144938026e-05 | 2.4776976990801728e-05 | 41.35% | 70.52% | 1.71x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.314694071575367e-05 | 2.423846788958592e-05 | 43.82% | 78.01% | 1.78x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.3131999637636527e-05 | 2.3981966669356984e-05 | 44.40% | 79.85% | 1.80x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.3631776863346394e-05 | 2.4855200248690102e-05 | 43.03% | 75.54% | 1.76x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.522667270833608e-05 | 3.6977956055516515e-05 | 33.04% | 49.35% | 1.49x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.325766186960858e-05 | 2.426977502388819e-05 | 43.89% | 78.24% | 1.78x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.348986465443547e-05 | 2.4215063509418235e-05 | 44.32% | 79.60% | 1.80x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.30473765470524e-05 | 2.3737886019731938e-05 | 44.86% | 81.34% | 1.81x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.324341035362795e-05 | 2.4040247606293935e-05 | 44.41% | 79.88% | 1.80x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.301541618785223e-05 | 2.3861829535942376e-05 | 44.53% | 80.27% | 1.80x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.385410215746407e-05 | 2.4578847610353732e-05 | 43.95% | 78.42% | 1.78x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.047464590723353e-05 | 3.187985299450781e-05 | 36.84% | 58.33% | 1.58x | ✅ |
| `hexbytes_new[b'abc']` | 4.289132494926352e-05 | 2.4143613631664997e-05 | 43.71% | 77.65% | 1.78x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.754148314053928e-05 | 3.4604326737944605e-05 | 48.77% | 95.18% | 1.95x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 7.006503730132026e-05 | 3.660795928374888e-05 | 47.75% | 91.39% | 1.91x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.96870664217148e-05 | 3.6385225801240917e-05 | 47.79% | 91.53% | 1.92x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.783373500455261e-05 | 3.517668040811891e-05 | 48.14% | 92.84% | 1.93x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.874175001808136e-05 | 3.592340340362158e-05 | 47.74% | 91.36% | 1.91x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.76358405293246e-05 | 3.4315157322233995e-05 | 49.26% | 97.10% | 1.97x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.6116557991551e-05 | 3.30168855512463e-05 | 50.06% | 100.25% | 2.00x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.768925962139999e-05 | 3.486841236079441e-05 | 48.49% | 94.13% | 1.94x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.812040235751019e-05 | 3.4843972091351125e-05 | 48.85% | 95.50% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.883691558724338e-05 | 3.569395284277324e-05 | 48.15% | 92.85% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 8.927351909873506e-05 | 5.277440417475053e-05 | 40.88% | 69.16% | 1.69x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.793980960461866e-05 | 3.497409565622359e-05 | 48.52% | 94.26% | 1.94x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.762503276356832e-05 | 3.474399131559202e-05 | 48.62% | 94.64% | 1.95x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.78139461755613e-05 | 3.498387298838603e-05 | 48.41% | 93.84% | 1.94x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.757554889109158e-05 | 3.497383124315995e-05 | 48.24% | 93.22% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.813874319164319e-05 | 3.477786049261907e-05 | 48.96% | 95.93% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.854442004874312e-05 | 3.558141089194865e-05 | 48.09% | 92.64% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.236459242159885e-05 | 4.7192906694552336e-05 | 42.70% | 74.53% | 1.75x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.801613734395748e-05 | 3.5263592365210924e-05 | 48.15% | 92.88% | 1.93x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.345378533361905e-05 | 4.726072118598915e-05 | 43.37% | 76.58% | 1.77x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 7.066372580514974e-05 | 3.661741075193614e-05 | 48.18% | 92.98% | 1.93x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.705344019701794e-05 | 3.46909296305964e-05 | 48.26% | 93.29% | 1.93x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.800121148541569e-05 | 3.457761282395044e-05 | 49.15% | 96.66% | 1.97x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.785061380101435e-05 | 3.5123336857554636e-05 | 48.23% | 93.18% | 1.93x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.775713644913523e-05 | 3.481419477524813e-05 | 48.62% | 94.63% | 1.95x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.880422788746302e-05 | 3.803800156615359e-05 | 44.72% | 80.88% | 1.81x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.782407466444206e-05 | 3.5393237309830794e-05 | 47.82% | 91.63% | 1.92x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.828425360732332e-05 | 3.5801815882347e-05 | 47.57% | 90.73% | 1.91x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.817225545782515e-05 | 3.5830158065730644e-05 | 47.44% | 90.27% | 1.90x | ✅ |
| `hexbytes_new[long alternating]` | 5.057192101046144e-05 | 3.1726330892338256e-05 | 37.26% | 59.40% | 1.59x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.382970129982043e-05 | 4.234048582748854e-05 | 49.49% | 97.99% | 1.98x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.572950594493915e-05 | 4.359690069207037e-05 | 49.15% | 96.64% | 1.97x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.303274071149481e-05 | 4.3317247428531994e-05 | 47.83% | 91.69% | 1.92x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.350816703211687e-05 | 4.245195330118428e-05 | 49.16% | 96.71% | 1.97x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.419255456045356e-05 | 4.3009612701782594e-05 | 48.92% | 95.75% | 1.96x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.269446856874598e-05 | 4.240016160634202e-05 | 48.73% | 95.03% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.254940377431484e-05 | 4.115539057344702e-05 | 50.14% | 100.58% | 2.01x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.401249696458394e-05 | 4.1833172759853255e-05 | 50.21% | 100.83% | 2.01x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.436119162371444e-05 | 4.220105808861735e-05 | 49.98% | 99.90% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.476803298423893e-05 | 4.2482662637339724e-05 | 49.88% | 99.54% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010478030588240623 | 6.141181868166403e-05 | 41.39% | 70.62% | 1.71x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.418400473690055e-05 | 4.1959797576217747e-05 | 50.16% | 100.63% | 2.01x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.447066004863529e-05 | 4.21787473669263e-05 | 50.07% | 100.27% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.348686633134312e-05 | 4.204524684268609e-05 | 49.64% | 98.56% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.343720505692505e-05 | 4.2095889588685745e-05 | 49.55% | 98.21% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.398678880126312e-05 | 4.226084017155746e-05 | 49.68% | 98.73% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.46145271316783e-05 | 4.258705299517582e-05 | 49.67% | 98.69% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.850426879935444e-05 | 5.468204829402094e-05 | 44.49% | 80.14% | 1.80x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.401457620316501e-05 | 4.1415987815189085e-05 | 50.70% | 102.86% | 2.03x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.74184833299139e-05 | 5.622206043230261e-05 | 42.29% | 73.27% | 1.73x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.521123572458409e-05 | 4.496174273965333e-05 | 47.23% | 89.52% | 1.90x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.382837271168607e-05 | 4.2267283288024326e-05 | 49.58% | 98.33% | 1.98x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.316219411695756e-05 | 4.13975162691169e-05 | 50.22% | 100.89% | 2.01x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.389046893124499e-05 | 4.1582726780147264e-05 | 50.43% | 101.74% | 2.02x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.386093552619044e-05 | 4.260591995557037e-05 | 49.19% | 96.83% | 1.97x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.374976185036338e-05 | 4.2743296182424256e-05 | 48.96% | 95.94% | 1.96x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.49366224722736e-05 | 4.292123428512194e-05 | 49.47% | 97.89% | 1.98x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.566716057275859e-05 | 4.2397116956198646e-05 | 50.51% | 102.06% | 2.02x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 7.98848902993953e-05 | 4.30294838167641e-05 | 46.14% | 85.65% | 1.86x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.3452785871044547e-05 | 2.5560893170153532e-05 | 41.18% | 70.00% | 1.70x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.3048228747149225e-05 | 2.3900723441882007e-05 | 44.48% | 80.11% | 1.80x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.398552534513449e-05 | 2.3947130256238907e-05 | 45.56% | 83.68% | 1.84x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.3435267338490795e-05 | 2.394245080443078e-05 | 44.88% | 81.42% | 1.81x | ✅ |
| `hexbytes_new[palindrome]` | 4.3703316629736764e-05 | 2.4056830925455745e-05 | 44.95% | 81.67% | 1.82x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.352775691699311e-05 | 2.430589435395722e-05 | 44.16% | 79.08% | 1.79x | ✅ |
| `hexbytes_new[single 0xff]` | 4.2166627075370724e-05 | 2.4607713642764047e-05 | 41.64% | 71.36% | 1.71x | ✅ |
| `hexbytes_new[single null byte]` | 4.205474327899772e-05 | 2.4745668547927977e-05 | 41.16% | 69.95% | 1.70x | ✅ |
| `hexbytes_new[two patterns]` | 4.3605933060784506e-05 | 2.4474811247775357e-05 | 43.87% | 78.17% | 1.78x | ✅ |
| `hexbytes_repr[0-9]` | 3.432648331952516e-05 | 1.5910743980312044e-05 | 53.65% | 115.74% | 2.16x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.0001246776174669493 | 4.190624854694951e-05 | 66.39% | 197.52% | 2.98x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012464081311166475 | 4.221854290056309e-05 | 66.13% | 195.23% | 2.95x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.52113421562053e-05 | 2.112153756246888e-05 | 61.74% | 161.40% | 2.61x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.4126288940446015e-05 | 2.1180087027337817e-05 | 60.87% | 155.55% | 2.56x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.5925693097470176e-05 | 1.9357575410500963e-05 | 57.85% | 137.25% | 2.37x | ✅ |
| `hexbytes_repr[b'']` | 2.5478932518913575e-05 | 1.2040450721584958e-05 | 52.74% | 111.61% | 2.12x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 4.2774946921971025e-05 | 1.7510732852853994e-05 | 59.06% | 144.28% | 2.44x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 3.310442252296217e-05 | 1.4972471382899655e-05 | 54.77% | 121.10% | 2.21x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.725891586143077e-05 | 2.4585571658733357e-05 | 63.45% | 173.57% | 2.74x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007888954873951876 | 0.00022343663458865951 | 71.68% | 253.07% | 3.53x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 3.2229820199474805e-05 | 1.495994137870835e-05 | 53.58% | 115.44% | 2.15x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 3.321590744895893e-05 | 1.512650180473773e-05 | 54.46% | 119.59% | 2.20x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.382813144674993e-05 | 1.5534399718523845e-05 | 54.08% | 117.76% | 2.18x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.402263959698766e-05 | 1.5433857951524003e-05 | 54.64% | 120.44% | 2.20x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 3.277700519927697e-05 | 1.5018371863745233e-05 | 54.18% | 118.25% | 2.18x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.436692204506138e-05 | 2.1316569195892636e-05 | 60.79% | 155.05% | 2.55x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00041206394604703433 | 0.0001232738973476506 | 70.08% | 234.27% | 3.34x | ✅ |
| `hexbytes_repr[b'abc']` | 3.205152708796532e-05 | 1.495722722697755e-05 | 53.33% | 114.29% | 2.14x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0004048818350923305 | 0.0001244029790722494 | 69.27% | 225.46% | 3.25x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.00010315194651275656 | 3.631200043693776e-05 | 64.80% | 184.07% | 2.84x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.499053731250545e-05 | 1.5840838723770985e-05 | 54.73% | 120.89% | 2.21x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.397099732392633e-05 | 1.526981326334829e-05 | 55.05% | 122.47% | 2.22x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 3.316658386691951e-05 | 1.483187654093545e-05 | 55.28% | 123.62% | 2.24x | ✅ |
| `hexbytes_repr[palindrome]` | 3.745679631882802e-05 | 1.6734112258092927e-05 | 55.32% | 123.83% | 2.24x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.73698774699143e-05 | 2.4687136069171378e-05 | 63.36% | 172.89% | 2.73x | ✅ |
| `hexbytes_repr[single 0xff]` | 3.094192098930765e-05 | 1.4857832885421923e-05 | 51.98% | 108.25% | 2.08x | ✅ |
| `hexbytes_repr[single null byte]` | 3.1312128563524675e-05 | 1.4763946274377963e-05 | 52.85% | 112.09% | 2.12x | ✅ |
| `hexbytes_repr[two patterns]` | 5.50901274664423e-05 | 2.1355573862875257e-05 | 61.24% | 157.97% | 2.58x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.7170867534396788e-05 | 1.4206205532262863e-05 | 17.27% | 20.87% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.336443240451263e-05 | 4.048511081399821e-05 | 6.64% | 7.11% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.3386950700564674e-05 | 4.056110383549139e-05 | 6.51% | 6.97% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.248406352083721e-05 | 1.9694683882484522e-05 | 12.41% | 14.16% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.239815327695219e-05 | 1.9691386821619954e-05 | 12.08% | 13.75% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.0402097943935577e-05 | 1.7826948757784028e-05 | 12.62% | 14.45% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0296430311014043e-05 | 1.1294304284596854e-05 | -9.69% | -8.84% | 0.91x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.892415333615435e-05 | 1.6389554335189105e-05 | 13.39% | 15.46% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.676358946344354e-05 | 1.3783531548882165e-05 | 17.78% | 21.62% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.6194484693248045e-05 | 2.3143890358788858e-05 | 11.65% | 13.18% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022612892234974424 | 0.00022490565406976397 | 0.54% | 0.54% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.6141296824807473e-05 | 1.362747197950784e-05 | 15.57% | 18.45% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.689263964127838e-05 | 1.3884385295292634e-05 | 17.81% | 21.67% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.724971392239548e-05 | 1.4173707509880013e-05 | 17.83% | 21.70% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.731848195258013e-05 | 1.4221091153220858e-05 | 17.88% | 21.78% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.6639842410692823e-05 | 1.3804476686729901e-05 | 17.04% | 20.54% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.2367070560869042e-05 | 1.9574926555578237e-05 | 12.48% | 14.26% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012700577676758406 | 0.00012088492797574521 | 4.82% | 5.06% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.6231448219341868e-05 | 1.3693354926405162e-05 | 15.64% | 18.54% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012878330373220043 | 0.0001216705803538326 | 5.52% | 5.85% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.648388939598969e-05 | 3.3584876405728957e-05 | 7.95% | 8.63% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.7152825589879848e-05 | 1.4514738657905981e-05 | 15.38% | 18.18% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.7090006284996216e-05 | 1.3993457199443572e-05 | 18.12% | 22.13% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.6924120486496193e-05 | 1.3987773077249936e-05 | 17.35% | 20.99% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.7988487703947507e-05 | 1.5441292790362668e-05 | 14.16% | 16.50% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.615753524088421e-05 | 2.2980834833680118e-05 | 12.14% | 13.82% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.5878663552962342e-05 | 1.342057644169713e-05 | 15.48% | 18.32% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.6023341306988703e-05 | 1.3383479731899386e-05 | 16.48% | 19.72% | 1.20x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.2465245408842268e-05 | 1.969106193158091e-05 | 12.35% | 14.09% | 1.14x | ✅ |
