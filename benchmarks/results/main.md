#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.742062809675646e-05 | 2.6305417274106347e-05 | 4.07% | 4.24% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.7611899344851443e-05 | 2.6592675849078693e-05 | 3.69% | 3.83% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.7293282380131435e-05 | 2.6422783847483695e-05 | 3.19% | 3.29% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.7489076224778463e-05 | 2.6189824573198312e-05 | 4.73% | 4.96% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.74569994812366e-05 | 2.6310870244549e-05 | 4.17% | 4.36% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.708178253087095e-05 | 2.63945220600283e-05 | 2.54% | 2.60% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.7339674156735953e-05 | 2.6052693158372315e-05 | 4.71% | 4.94% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.7515045571225548e-05 | 2.6193702469548295e-05 | 4.80% | 5.04% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.751688555173897e-05 | 2.637956829423026e-05 | 4.13% | 4.31% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.744948743439641e-05 | 2.6457541879635456e-05 | 3.61% | 3.75% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.7405449307011097e-05 | 2.6291903647916416e-05 | 4.06% | 4.24% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.755382356029405e-05 | 2.6296308842286794e-05 | 4.56% | 4.78% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.7496408104149306e-05 | 2.6357807225144596e-05 | 4.14% | 4.32% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.7580927914897003e-05 | 2.612611318530422e-05 | 5.27% | 5.57% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.7622744868101722e-05 | 2.6422674621432846e-05 | 4.34% | 4.54% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.72797690092913e-05 | 2.6491422592621403e-05 | 2.89% | 2.98% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.7465379342522393e-05 | 2.6517829313179846e-05 | 3.45% | 3.57% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.7581083341041685e-05 | 2.6510348236187965e-05 | 3.88% | 4.04% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.7363405934668887e-05 | 2.6363433365457247e-05 | 3.65% | 3.79% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.744812644174076e-05 | 2.7432506016668292e-05 | 0.06% | 0.06% | 1.00x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.7442577374073894e-05 | 2.625459542294497e-05 | 4.33% | 4.52% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.745888873947543e-05 | 2.651792559001716e-05 | 3.43% | 3.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.728730454704661e-05 | 2.652091221300052e-05 | 2.81% | 2.89% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.752129664265144e-05 | 2.646509600942788e-05 | 3.84% | 3.99% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.7413341540392827e-05 | 2.636731655338118e-05 | 3.82% | 3.97% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.8169514484932495e-05 | 2.6460268045407997e-05 | 6.07% | 6.46% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.6517599153494004e-05 | 2.4996957402744116e-05 | 5.73% | 6.08% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.695972508534827e-05 | 2.4935345064069265e-05 | 7.51% | 8.12% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.674549195922355e-05 | 2.4894242631644854e-05 | 6.92% | 7.44% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.658995343377898e-05 | 2.4971395734072233e-05 | 6.09% | 6.48% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.6659636197945772e-05 | 2.552352211011496e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.6776714919081352e-05 | 2.561684222663635e-05 | 4.33% | 4.53% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.7050669295227652e-05 | 2.4802982652679717e-05 | 8.31% | 9.06% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.669350850745488e-05 | 2.4831597493359734e-05 | 6.98% | 7.50% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.6557991014857985e-05 | 2.565593479334018e-05 | 3.40% | 3.52% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.6269957533114104e-05 | 2.5634176017575724e-05 | 2.42% | 2.48% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.6698877767829952e-05 | 2.5308146098120342e-05 | 5.21% | 5.50% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6599188763478458e-05 | 2.539476757279245e-05 | 4.53% | 4.74% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.6660234103946537e-05 | 2.5279400604273234e-05 | 5.18% | 5.46% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.641939160517916e-05 | 2.5428735753135122e-05 | 3.75% | 3.90% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.6995610515510937e-05 | 2.5345559461679842e-05 | 6.11% | 6.51% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.786607578400889e-05 | 2.5512214281657267e-05 | 8.45% | 9.23% | 1.09x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.681205523673269e-05 | 2.5326922739136667e-05 | 5.54% | 5.86% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.6986690526804982e-05 | 2.5407279103453378e-05 | 5.85% | 6.22% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.6106128869918203e-05 | 2.5080508789281706e-05 | 3.93% | 4.09% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.6725623283454646e-05 | 2.596504743087036e-05 | 2.85% | 2.93% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.65208605680309e-05 | 2.5034145719662537e-05 | 5.61% | 5.94% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.650011355920976e-05 | 2.5480733864015706e-05 | 3.85% | 4.00% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.6727467465749578e-05 | 2.54398677427922e-05 | 4.82% | 5.06% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.672428975013059e-05 | 2.5262315260847684e-05 | 5.47% | 5.79% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.6755820297149658e-05 | 2.4806376244205644e-05 | 7.29% | 7.86% | 1.08x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.7312728856640134e-05 | 2.5528235729120092e-05 | 6.53% | 6.99% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.6816645700160477e-05 | 2.5360528033390522e-05 | 5.43% | 5.74% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.6466135883960693e-05 | 2.4978426537431803e-05 | 5.62% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.6803232956625467e-05 | 2.6135786745755477e-05 | 2.49% | 2.55% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.6713119183264728e-05 | 2.557623381367343e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.6273233417183823e-05 | 2.5506953218143066e-05 | 2.92% | 3.00% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.664875484070713e-05 | 2.6161400146523147e-05 | 1.83% | 1.86% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.6581726012753336e-05 | 2.6014063572177367e-05 | 2.14% | 2.18% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.656550165976702e-05 | 2.535902880560357e-05 | 4.54% | 4.76% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.6655266506011664e-05 | 2.5737599591867236e-05 | 3.44% | 3.57% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.7275698112803052e-05 | 2.6132584044478297e-05 | 4.19% | 4.37% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.6708403843130085e-05 | 2.5713956566682668e-05 | 3.72% | 3.87% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.668590836404318e-05 | 2.592694107762875e-05 | 2.84% | 2.93% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.656581843952902e-05 | 2.5668782032401265e-05 | 3.38% | 3.49% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6608698344858845e-05 | 2.5674677890513802e-05 | 3.51% | 3.64% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.6537071323593645e-05 | 2.6143346363904758e-05 | 1.48% | 1.51% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.6593928458738322e-05 | 2.5569180256799096e-05 | 3.85% | 4.01% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.644928488766852e-05 | 2.566956537002702e-05 | 2.95% | 3.04% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.6586889095455474e-05 | 2.5688030563591658e-05 | 3.38% | 3.50% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.6676683255687525e-05 | 2.5648995524519756e-05 | 3.85% | 4.01% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.6749275727932427e-05 | 2.557749796116476e-05 | 4.38% | 4.58% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.6710862087234258e-05 | 2.6018113463559166e-05 | 2.59% | 2.66% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.6566382266819323e-05 | 2.5431186165062306e-05 | 4.27% | 4.46% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.7352177606141506e-05 | 2.6094844151621987e-05 | 4.60% | 4.82% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.6496104297657094e-05 | 2.542699091435832e-05 | 4.03% | 4.20% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.651442719842704e-05 | 2.5437082887449932e-05 | 4.06% | 4.24% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.697886178628411e-05 | 2.6175442946062773e-05 | 2.98% | 3.07% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.648250246182238e-05 | 2.5265085277533173e-05 | 4.60% | 4.82% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.641270767848688e-05 | 2.552876238136741e-05 | 3.35% | 3.46% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.6441139649302755e-05 | 2.549131941629441e-05 | 3.59% | 3.73% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.6244501165175936e-05 | 2.5573593972882947e-05 | 2.56% | 2.62% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.7419600521119712e-05 | 2.5522250519065708e-05 | 6.92% | 7.43% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.649986058182146e-05 | 2.49249656831082e-05 | 5.94% | 6.32% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.649747147791092e-05 | 2.5573801575002118e-05 | 3.49% | 3.61% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.6480114611290514e-05 | 2.5588690238627735e-05 | 3.37% | 3.48% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.638287113540413e-05 | 2.5013384671164513e-05 | 5.19% | 5.48% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.644092680967071e-05 | 2.498185866498939e-05 | 5.52% | 5.84% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.651194022233678e-05 | 2.5432074864667542e-05 | 4.07% | 4.25% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.6547215178136392e-05 | 2.564443481926806e-05 | 3.40% | 3.52% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.668582396943565e-05 | 2.5553021102394345e-05 | 4.24% | 4.43% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.647836554431715e-05 | 2.5407139352568465e-05 | 4.05% | 4.22% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.628424980300453e-05 | 2.5591143220255702e-05 | 2.64% | 2.71% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.6555851887047428e-05 | 2.544582219052378e-05 | 4.18% | 4.36% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.648664620623446e-05 | 2.554375655051944e-05 | 3.56% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.6690713152632695e-05 | 2.551721628764004e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.654088042479487e-05 | 2.5515805011706698e-05 | 3.86% | 4.02% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.6051719204662986e-05 | 2.5511097341031686e-05 | 2.08% | 2.12% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.6601699245094134e-05 | 2.5095848244577168e-05 | 5.66% | 6.00% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.6531185863228075e-05 | 2.557414837351085e-05 | 3.61% | 3.74% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.653315552825325e-05 | 2.5592593696281646e-05 | 3.54% | 3.68% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.6526263361023734e-05 | 2.557174341050482e-05 | 3.60% | 3.73% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.658311083064001e-05 | 2.544959468606183e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.6474333700185886e-05 | 2.5531996960648154e-05 | 3.56% | 3.69% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.6444112611108514e-05 | 2.5495698287037685e-05 | 3.59% | 3.72% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.6566556076617563e-05 | 2.5114925140513344e-05 | 5.46% | 5.78% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.6399257644460944e-05 | 2.5491014669377733e-05 | 3.44% | 3.56% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.6398342864859693e-05 | 2.5470606100700968e-05 | 3.51% | 3.64% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.6332234453730245e-05 | 2.6105155120796174e-05 | 0.86% | 0.87% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.659403915450825e-05 | 2.55708664366802e-05 | 3.85% | 4.00% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.644000355482277e-05 | 2.557543255253114e-05 | 3.27% | 3.38% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.6382033874209436e-05 | 2.5921898887020046e-05 | 1.74% | 1.78% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.6430230803757433e-05 | 2.5165106827403376e-05 | 4.79% | 5.03% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.653015694557377e-05 | 2.5537387865172397e-05 | 3.74% | 3.89% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.6518299115681492e-05 | 2.545132100338204e-05 | 4.02% | 4.19% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.7721513903517608e-05 | 2.5502821357429388e-05 | 8.00% | 8.70% | 1.09x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6584244327444342e-05 | 2.5578997927534073e-05 | 3.78% | 3.93% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.6012418623031277e-05 | 2.5544892164609115e-05 | 1.80% | 1.83% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.6520660743685602e-05 | 2.5383673461361958e-05 | 4.29% | 4.48% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.614693964668699e-05 | 2.5563973668603682e-05 | 2.23% | 2.28% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.630389968045332e-05 | 2.5642997912525792e-05 | 2.51% | 2.58% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.6664651710106187e-05 | 2.5643353355665384e-05 | 3.83% | 3.98% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.6492907405985295e-05 | 2.5476900717754147e-05 | 3.84% | 3.99% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.6530405248448227e-05 | 2.5435688940430566e-05 | 4.13% | 4.30% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.6597969654796862e-05 | 2.5449983087973867e-05 | 4.32% | 4.51% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.661196258045609e-05 | 2.5454250894200222e-05 | 4.35% | 4.55% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.6588738625973336e-05 | 2.5528241938342038e-05 | 3.99% | 4.15% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.6459282973881488e-05 | 2.5582533407979902e-05 | 3.31% | 3.43% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.6580352962898844e-05 | 2.542585601357232e-05 | 4.34% | 4.54% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.6588579934989825e-05 | 2.6160203444173963e-05 | 1.61% | 1.64% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.6354973809841493e-05 | 2.557376671779792e-05 | 2.96% | 3.05% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.691448886984306e-05 | 2.4924595791276212e-05 | 7.39% | 7.98% | 1.08x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.6779643369695425e-05 | 2.5245773685508007e-05 | 5.73% | 6.08% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.6548419204862935e-05 | 2.503748598118239e-05 | 5.69% | 6.03% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.6485997792616585e-05 | 2.5501360397637584e-05 | 3.72% | 3.86% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.68747591084725e-05 | 2.543407806317491e-05 | 5.36% | 5.66% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.6601802715928716e-05 | 2.5031755139805156e-05 | 5.90% | 6.27% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.6338793861840618e-05 | 2.5591094344943044e-05 | 2.84% | 2.92% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.6887599545715674e-05 | 2.6088186732915004e-05 | 2.97% | 3.06% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6263985362197966e-05 | 2.559316664260492e-05 | 2.55% | 2.62% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.653539331967432e-05 | 2.553870379825138e-05 | 3.76% | 3.90% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.6488197453621224e-05 | 2.557669960270614e-05 | 3.44% | 3.56% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.664734915324146e-05 | 2.5500318212092672e-05 | 4.30% | 4.50% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.6592871306737676e-05 | 2.5789569240141806e-05 | 3.02% | 3.11% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.683873937152943e-05 | 2.500704941743503e-05 | 6.82% | 7.32% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.7004988228751124e-05 | 2.5431783820729192e-05 | 5.83% | 6.19% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.6130831586100123e-05 | 2.5584696651782283e-05 | 2.09% | 2.13% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.6685278553505704e-05 | 2.5148492312558782e-05 | 5.76% | 6.11% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.690935796236387e-05 | 2.552324446465858e-05 | 5.15% | 5.43% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.653444811780979e-05 | 2.560685908782924e-05 | 3.50% | 3.62% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.6812351264927478e-05 | 2.581394550129497e-05 | 3.72% | 3.87% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.6977729066544857e-05 | 2.4977814503862802e-05 | 7.41% | 8.01% | 1.08x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.6942862084053033e-05 | 2.561052508702585e-05 | 4.95% | 5.20% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.6839885968189354e-05 | 2.5426450128099165e-05 | 5.27% | 5.56% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.6815691916827158e-05 | 2.5465495645398155e-05 | 5.04% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.6870799263389006e-05 | 2.5484888387447254e-05 | 5.16% | 5.44% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.704379798276688e-05 | 2.5556198230069773e-05 | 5.50% | 5.82% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.6703370061212625e-05 | 2.5378676642856142e-05 | 4.96% | 5.22% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.661706845272964e-05 | 2.5102287746217995e-05 | 5.69% | 6.03% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.7126620740266376e-05 | 2.538706843600015e-05 | 6.41% | 6.85% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.6819207340546806e-05 | 2.5620902535240536e-05 | 4.47% | 4.68% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.6771218317454218e-05 | 2.5397612690463195e-05 | 5.13% | 5.41% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.6946072836623918e-05 | 2.5645199933125925e-05 | 4.83% | 5.07% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.6526733948656543e-05 | 2.5629883831010747e-05 | 3.38% | 3.50% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.6449459512602604e-05 | 2.5655486394591275e-05 | 3.00% | 3.09% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.657467686575624e-05 | 2.5391834294307092e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.67543677637331e-05 | 2.5289746469160123e-05 | 5.47% | 5.79% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.679466087307742e-05 | 2.5500296554263324e-05 | 4.83% | 5.08% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.6712886684548617e-05 | 2.5493468400279146e-05 | 4.56% | 4.78% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.6902916960509094e-05 | 2.5340323930706424e-05 | 5.81% | 6.17% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.6885196091483218e-05 | 2.524366922914621e-05 | 6.11% | 6.50% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.6849694011756646e-05 | 2.5389918695952768e-05 | 5.44% | 5.75% | 1.06x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.235572608103719e-05 | 5.932160213102717e-05 | 27.97% | 38.83% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.27092639374233e-05 | 5.900667461729292e-05 | 28.66% | 40.17% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.23383931402915e-05 | 5.8429236704572324e-05 | 29.04% | 40.92% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.197497594019808e-05 | 5.980194669635598e-05 | 27.05% | 37.08% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.181583102763702e-05 | 6.067954242963135e-05 | 25.83% | 34.83% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.197228029046795e-05 | 5.8679164783813715e-05 | 28.42% | 39.70% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.913019139765701e-05 | 5.743223394658053e-05 | 27.42% | 37.78% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.13993234651661e-05 | 5.938940836957975e-05 | 27.04% | 37.06% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.224273859105046e-05 | 5.952018648827213e-05 | 27.63% | 38.18% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.240342445434505e-05 | 5.945310931824802e-05 | 27.85% | 38.60% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.285284765652127e-05 | 5.742003652265946e-05 | 30.70% | 44.29% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.238364161516191e-05 | 5.921508396097584e-05 | 28.12% | 39.13% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.208547224357545e-05 | 6.02273408288902e-05 | 26.63% | 36.29% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.147290190446361e-05 | 6.013878969293715e-05 | 26.19% | 35.47% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.256248293131671e-05 | 5.947355315171595e-05 | 27.97% | 38.82% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.213746264989993e-05 | 5.969800941819952e-05 | 27.32% | 37.59% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.152132892090979e-05 | 5.988758241231996e-05 | 26.54% | 36.12% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 7.996785778191265e-05 | 5.902038838907328e-05 | 26.19% | 35.49% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.295521961094942e-05 | 5.923879657089333e-05 | 28.59% | 40.04% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.284104850216552e-05 | 5.925544130997029e-05 | 28.47% | 39.80% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.240845435135355e-05 | 6.137177885257517e-05 | 25.53% | 34.28% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.181022657454236e-05 | 5.874404276309157e-05 | 28.19% | 39.27% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.29641927953123e-05 | 5.838067854346356e-05 | 29.63% | 42.11% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.23074087131622e-05 | 5.906613949695537e-05 | 28.24% | 39.35% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.195570843399369e-05 | 6.0190622667810296e-05 | 26.56% | 36.16% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.184824908896071e-05 | 5.8141496558307464e-05 | 28.96% | 40.77% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.892487469715247e-05 | 5.7222552764405566e-05 | 27.50% | 37.93% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 8.147837992556968e-05 | 5.7202496948727386e-05 | 29.79% | 42.44% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.15201502928395e-05 | 5.9049079856535044e-05 | 27.57% | 38.05% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.457903800912955e-05 | 5.965982030490155e-05 | 29.46% | 41.77% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.427822375143757e-05 | 6.003645877979292e-05 | 28.76% | 40.38% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.409880867655551e-05 | 5.87871117612907e-05 | 30.10% | 43.06% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.523353972440382e-05 | 5.950763359085496e-05 | 30.18% | 43.23% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.701647498380318e-05 | 5.9676024713642105e-05 | 31.42% | 45.81% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.410805066851242e-05 | 5.866471871372099e-05 | 30.25% | 43.37% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 8.041014537378724e-05 | 5.794125057210553e-05 | 27.94% | 38.78% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.376901654574884e-05 | 6.050783511458295e-05 | 27.77% | 38.44% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.134987144226935e-05 | 5.986035173955226e-05 | 26.42% | 35.90% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.356780643166912e-05 | 5.993662975347224e-05 | 28.28% | 39.43% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.375183484221592e-05 | 6.035536059180519e-05 | 27.94% | 38.76% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.369423025926389e-05 | 5.992772144278313e-05 | 28.40% | 39.66% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.305821922605828e-05 | 5.9718044342595974e-05 | 28.10% | 39.08% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.28551910971011e-05 | 5.9564964476719275e-05 | 28.11% | 39.10% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.325596601323349e-05 | 6.0442684913395606e-05 | 27.40% | 37.74% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.343899049845815e-05 | 5.9778233688201584e-05 | 28.36% | 39.58% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.457760507074583e-05 | 6.0022638507101e-05 | 29.03% | 40.91% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.617543853292842e-05 | 5.984852727080406e-05 | 30.55% | 43.99% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.293903353654011e-05 | 5.971924509899981e-05 | 28.00% | 38.88% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.331204093777062e-05 | 6.0419200480083874e-05 | 27.48% | 37.89% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.398810158968872e-05 | 6.0369874084690056e-05 | 28.12% | 39.12% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.396855282760423e-05 | 5.931296325418979e-05 | 29.36% | 41.57% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.549904362176503e-05 | 6.072568791059377e-05 | 28.98% | 40.80% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.405186456093577e-05 | 6.019552901946673e-05 | 28.38% | 39.63% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.318083665003689e-05 | 6.0229927414666556e-05 | 27.59% | 38.11% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.368820488436841e-05 | 6.0480597538722004e-05 | 27.73% | 38.37% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.865953027679479e-05 | 5.7881027232181486e-05 | 26.42% | 35.90% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.971339643509515e-05 | 5.772964078746667e-05 | 27.58% | 38.08% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.402558919956824e-05 | 5.962753859051336e-05 | 29.04% | 40.92% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.234483641174998e-05 | 6.027191071500538e-05 | 26.81% | 36.62% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.244645982282693e-05 | 6.088921631585875e-05 | 26.15% | 35.40% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.276334137792221e-05 | 6.0608783453585217e-05 | 26.77% | 36.55% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.364458560920802e-05 | 6.136806379339368e-05 | 26.63% | 36.30% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.236675910647998e-05 | 6.002713117033316e-05 | 27.12% | 37.22% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.136412771232778e-05 | 6.0177293666056096e-05 | 26.04% | 35.21% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.979538487643743e-05 | 5.712994134826192e-05 | 28.40% | 39.67% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.330829816552205e-05 | 5.997788623918099e-05 | 28.00% | 38.90% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.36182370659741e-05 | 6.090071906574279e-05 | 27.17% | 37.30% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.297948982157624e-05 | 6.005180890572109e-05 | 27.63% | 38.18% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.631331149327255e-05 | 6.109153936585055e-05 | 29.22% | 41.29% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.188911336587492e-05 | 5.9568835859764375e-05 | 27.26% | 37.47% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.275060158308371e-05 | 6.0139281722907455e-05 | 27.32% | 37.60% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.25914610843261e-05 | 6.075537804247856e-05 | 26.44% | 35.94% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.280679996280156e-05 | 6.070106161591028e-05 | 26.70% | 36.42% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.373262071642934e-05 | 6.0229210339898015e-05 | 28.07% | 39.02% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.261840915786113e-05 | 6.044346309966017e-05 | 26.84% | 36.69% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.265550546305933e-05 | 5.920176426916909e-05 | 28.38% | 39.62% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.315946742449408e-05 | 5.9384098300595385e-05 | 28.59% | 40.04% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.246764368723223e-05 | 6.0449730869472694e-05 | 26.70% | 36.42% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.264788624089145e-05 | 5.9351597945418366e-05 | 28.19% | 39.25% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.273170963100979e-05 | 5.983714944552065e-05 | 27.67% | 38.26% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.292394281812837e-05 | 6.095312747116472e-05 | 26.50% | 36.05% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.249460389089554e-05 | 6.115104224464323e-05 | 25.87% | 34.90% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.243121722452402e-05 | 6.028758101174763e-05 | 26.86% | 36.73% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.264270335023748e-05 | 5.9461161911306064e-05 | 28.05% | 38.99% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 8.004684245344147e-05 | 5.746049858067096e-05 | 28.22% | 39.31% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 7.952966237205849e-05 | 5.819088327841709e-05 | 26.83% | 36.67% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.342752660878406e-05 | 5.979599237121757e-05 | 28.33% | 39.52% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.102882910980739e-05 | 5.894545479706705e-05 | 27.25% | 37.46% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.137305310745933e-05 | 5.908724124361075e-05 | 27.39% | 37.72% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.167315430101407e-05 | 5.977344172423085e-05 | 26.81% | 36.64% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.163801058258108e-05 | 5.929557771453605e-05 | 27.37% | 37.68% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.2414484556508e-05 | 5.9478411985174724e-05 | 27.83% | 38.56% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.036082334748532e-05 | 5.890071398727297e-05 | 26.70% | 36.43% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.841993675136125e-05 | 5.680241791032924e-05 | 27.57% | 38.06% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.324650379542905e-05 | 5.821326073204894e-05 | 30.07% | 43.00% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.118004696250175e-05 | 5.9124264067911945e-05 | 27.17% | 37.30% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.204183111849869e-05 | 6.009123408869974e-05 | 26.76% | 36.53% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010360418235651054 | 8.039125077116974e-05 | 22.41% | 28.87% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.856820970747884e-05 | 5.649356220970813e-05 | 28.10% | 39.07% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.176539750700488e-05 | 5.940972762800924e-05 | 27.34% | 37.63% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.086645585788461e-05 | 6.160637656821042e-05 | 23.82% | 31.26% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.101325079237851e-05 | 5.901120303027042e-05 | 27.16% | 37.28% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.129063379105233e-05 | 5.828250396258679e-05 | 28.30% | 39.48% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.349648859502937e-05 | 5.854272147972847e-05 | 29.89% | 42.62% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.872073156162995e-05 | 7.342345446946453e-05 | 25.63% | 34.45% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.755037154119476e-05 | 5.690670376079594e-05 | 26.62% | 36.28% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.900176678837364e-05 | 7.461706160585142e-05 | 24.63% | 32.68% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.215898126297286e-05 | 5.8762175100402606e-05 | 28.48% | 39.82% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.032278461322558e-05 | 5.899393255910087e-05 | 26.55% | 36.15% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.14209436989095e-05 | 5.92339284149529e-05 | 27.25% | 37.46% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.169739181021723e-05 | 5.85123897156303e-05 | 28.38% | 39.62% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.108955590173482e-05 | 5.9433927343275376e-05 | 26.71% | 36.44% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.157251651900569e-05 | 5.974066753611689e-05 | 26.76% | 36.54% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 8.168146590113593e-05 | 5.669493546189852e-05 | 30.59% | 44.07% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.884215347316037e-05 | 5.7490967664896264e-05 | 27.08% | 37.14% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.130680755570835e-05 | 5.8704554447484905e-05 | 27.80% | 38.50% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.858786780042035e-05 | 5.773427773421419e-05 | 26.54% | 36.12% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.076021232462485e-05 | 5.931625967009301e-05 | 26.55% | 36.15% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.106801267592811e-05 | 5.90148053725426e-05 | 27.20% | 37.37% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.043793076996202e-05 | 5.9319888652431615e-05 | 26.25% | 35.60% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.933109886637258e-05 | 5.776163106117892e-05 | 27.19% | 37.34% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.862309369138241e-05 | 5.742266526967282e-05 | 26.96% | 36.92% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.705251718376086e-05 | 5.629123022262144e-05 | 26.94% | 36.88% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.835950511121143e-05 | 5.7663514912195354e-05 | 26.41% | 35.89% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.901301305007427e-05 | 5.79192085340687e-05 | 26.70% | 36.42% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.020204292080717e-05 | 5.815784654986936e-05 | 27.49% | 37.90% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010242704718561567 | 7.913752558284253e-05 | 22.74% | 29.43% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.045666928533012e-05 | 5.798885602683617e-05 | 27.93% | 38.75% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.922791542383472e-05 | 5.791808130934768e-05 | 26.90% | 36.79% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.906711552248186e-05 | 5.736710521709238e-05 | 27.45% | 37.83% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.916305683431892e-05 | 5.7519571497121595e-05 | 27.34% | 37.63% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.934704357635128e-05 | 5.780294480098849e-05 | 27.15% | 37.27% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.943977852659432e-05 | 5.766869363113411e-05 | 27.41% | 37.75% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.791176870099976e-05 | 7.277586266428379e-05 | 25.67% | 34.54% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.838983076076896e-05 | 5.95304310801773e-05 | 24.06% | 31.68% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.743057735556975e-05 | 7.383335025182705e-05 | 24.22% | 31.96% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.99515804932396e-05 | 5.9702704818816096e-05 | 25.33% | 33.92% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.892776641022467e-05 | 5.784656109657991e-05 | 26.71% | 36.44% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.873230270921115e-05 | 5.98283581936664e-05 | 24.01% | 31.60% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.921744706114061e-05 | 5.8344417456983304e-05 | 26.35% | 35.78% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.974898146314312e-05 | 5.783442400838328e-05 | 27.48% | 37.89% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.992836937177543e-05 | 5.844763708186693e-05 | 26.87% | 36.75% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.970609629081192e-05 | 5.673849817385526e-05 | 28.82% | 40.48% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.728785644749472e-05 | 5.6354658366779384e-05 | 27.08% | 37.15% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.046682679162197e-05 | 5.848975703193391e-05 | 27.31% | 37.57% | 1.38x | ✅ |
| `hexbytes_new['']` | 7.352570025546546e-05 | 3.4712949650367284e-05 | 52.79% | 111.81% | 2.12x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.19600016359102e-05 | 4.887215613352935e-05 | 46.85% | 88.16% | 1.88x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.343724375964901e-05 | 4.933655485010168e-05 | 47.20% | 89.39% | 1.89x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.862191426627372e-05 | 4.580346665010988e-05 | 48.32% | 93.48% | 1.93x | ✅ |
| `hexbytes_new['0x']` | 7.816427618030759e-05 | 3.575750947201823e-05 | 54.25% | 118.60% | 2.19x | ✅ |
| `hexbytes_new['0x1234']` | 8.723455981452349e-05 | 4.3321848323395824e-05 | 50.34% | 101.36% | 2.01x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.732997056679154e-05 | 4.294556872994476e-05 | 50.82% | 103.35% | 2.03x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.700369849247966e-05 | 4.484001821406706e-05 | 48.46% | 94.03% | 1.94x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.760450209818947e-05 | 4.315097831099132e-05 | 50.74% | 103.02% | 2.03x | ✅ |
| `hexbytes_new['abc']` | 8.486346591055412e-05 | 4.5784064505172255e-05 | 46.05% | 85.36% | 1.85x | ✅ |
| `hexbytes_new['deadbeef']` | 7.862893206819576e-05 | 3.929292201809484e-05 | 50.03% | 100.11% | 2.00x | ✅ |
| `hexbytes_new[0-9]` | 4.24815537230749e-05 | 2.3967800074244177e-05 | 43.58% | 77.24% | 1.77x | ✅ |
| `hexbytes_new[0]` | 0.0001253444036752343 | 6.420250362049922e-05 | 48.78% | 95.23% | 1.95x | ✅ |
| `hexbytes_new[123456]` | 0.00013032860645259645 | 6.784602155018078e-05 | 47.94% | 92.09% | 1.92x | ✅ |
| `hexbytes_new[2**16]` | 0.00013065260083832225 | 6.816946732095509e-05 | 47.82% | 91.66% | 1.92x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013534136959174198 | 7.324690882038792e-05 | 45.88% | 84.77% | 1.85x | ✅ |
| `hexbytes_new[2**32]` | 0.0001324566778171697 | 7.058154062268404e-05 | 46.71% | 87.66% | 1.88x | ✅ |
| `hexbytes_new[2**64]` | 0.00013133965781471837 | 7.256436583443508e-05 | 44.75% | 81.00% | 1.81x | ✅ |
| `hexbytes_new[2**8]` | 0.00012471671795553888 | 6.738958544316582e-05 | 45.97% | 85.07% | 1.85x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.363351684369655e-05 | 2.514333312315115e-05 | 42.38% | 73.54% | 1.74x | ✅ |
| `hexbytes_new[False]` | 6.33442482174385e-05 | 2.5569449579657297e-05 | 59.63% | 147.73% | 2.48x | ✅ |
| `hexbytes_new[True]` | 6.224935953933878e-05 | 2.559439887854792e-05 | 58.88% | 143.21% | 2.43x | ✅ |
| `hexbytes_new[all byte values]` | 4.5032897126346096e-05 | 2.5193888651193787e-05 | 44.05% | 78.75% | 1.79x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.3431647309843454e-05 | 2.4561211656440286e-05 | 43.45% | 76.83% | 1.77x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.334508094932377e-05 | 2.4561010051870822e-05 | 43.34% | 76.48% | 1.76x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.2745579645487524e-05 | 2.4019061948553402e-05 | 43.81% | 77.97% | 1.78x | ✅ |
| `hexbytes_new[b'']` | 4.2800099910337745e-05 | 2.466675361105418e-05 | 42.37% | 73.51% | 1.74x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.1816006153782495e-05 | 2.4064904086474625e-05 | 42.45% | 73.76% | 1.74x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.269497974884199e-05 | 2.3904176100598297e-05 | 44.01% | 78.61% | 1.79x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.334217060782401e-05 | 2.4556122679896586e-05 | 43.34% | 76.50% | 1.77x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.4659872652300444e-05 | 3.677485780821271e-05 | 32.72% | 48.63% | 1.49x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.2935558615780275e-05 | 2.3926505885573752e-05 | 44.27% | 79.45% | 1.79x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.300212008513133e-05 | 2.390473675176325e-05 | 44.41% | 79.89% | 1.80x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.269085828105452e-05 | 2.3877231242690973e-05 | 44.07% | 78.79% | 1.79x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.260791137991749e-05 | 2.3909756897213953e-05 | 43.88% | 78.20% | 1.78x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.309228033770119e-05 | 2.4084417266815954e-05 | 44.11% | 78.92% | 1.79x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.3382431977577656e-05 | 2.4600264642528654e-05 | 43.29% | 76.35% | 1.76x | ✅ |
| `hexbytes_new[b'a'*1024]` | 4.927678753164796e-05 | 3.167319751953657e-05 | 35.72% | 55.58% | 1.56x | ✅ |
| `hexbytes_new[b'abc']` | 4.347068633389514e-05 | 2.4026124870978595e-05 | 44.73% | 80.93% | 1.81x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.777144149629236e-05 | 3.449140861057062e-05 | 49.11% | 96.49% | 1.96x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.979954053264324e-05 | 3.6828767627226805e-05 | 47.24% | 89.52% | 1.90x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.988908285197176e-05 | 3.6832744385103405e-05 | 47.30% | 89.75% | 1.90x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.84155034642877e-05 | 3.554381781367967e-05 | 48.05% | 92.48% | 1.92x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.819820466571049e-05 | 3.554549456158346e-05 | 47.88% | 91.86% | 1.92x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.736356569075685e-05 | 3.4934260348939864e-05 | 48.14% | 92.83% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.648874203064041e-05 | 3.305172136728159e-05 | 50.29% | 101.17% | 2.01x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.807348230871862e-05 | 3.4784826198225934e-05 | 48.90% | 95.70% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.639092667965058e-05 | 3.5055189502070315e-05 | 47.20% | 89.39% | 1.89x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.837263685831085e-05 | 3.5544671879058964e-05 | 48.01% | 92.36% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.045435453255987e-05 | 5.3146022818726674e-05 | 41.25% | 70.20% | 1.70x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.886426784804065e-05 | 3.54691858977446e-05 | 48.49% | 94.15% | 1.94x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.791077899622157e-05 | 3.5110242808992037e-05 | 48.30% | 93.42% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.70928739899739e-05 | 3.475378508682061e-05 | 48.20% | 93.05% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.707481560665028e-05 | 3.488839070256297e-05 | 47.99% | 92.26% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.74931955137652e-05 | 3.507650678745325e-05 | 48.03% | 92.42% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.886772102170935e-05 | 3.5726898806114886e-05 | 48.12% | 92.76% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.528935549159919e-05 | 4.7698265899277575e-05 | 44.07% | 78.81% | 1.79x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.711369661327544e-05 | 3.5066155188698005e-05 | 47.75% | 91.39% | 1.91x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.502010051658481e-05 | 4.7733072137239926e-05 | 43.86% | 78.12% | 1.78x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.884121859050044e-05 | 3.5666134315122244e-05 | 48.19% | 93.02% | 1.93x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.762676243108445e-05 | 3.47344080511048e-05 | 48.64% | 94.70% | 1.95x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.749765857060205e-05 | 3.5245662579438e-05 | 47.78% | 91.51% | 1.92x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.807514390455677e-05 | 3.51645971435971e-05 | 48.34% | 93.59% | 1.94x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.69861282933227e-05 | 3.475773799876461e-05 | 48.11% | 92.72% | 1.93x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.882775072389244e-05 | 3.623634504282628e-05 | 47.35% | 89.94% | 1.90x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.837094948506967e-05 | 3.588582960100495e-05 | 47.51% | 90.52% | 1.91x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.837600185700612e-05 | 3.5711717706647786e-05 | 47.77% | 91.47% | 1.91x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.830917528395915e-05 | 3.5647383434603966e-05 | 47.81% | 91.62% | 1.92x | ✅ |
| `hexbytes_new[long alternating]` | 4.95696261773901e-05 | 3.174114613714371e-05 | 35.97% | 56.17% | 1.56x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.392501558709605e-05 | 4.171477215453085e-05 | 50.30% | 101.19% | 2.01x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.566507898548017e-05 | 4.26640877635547e-05 | 50.20% | 100.79% | 2.01x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.435117267608703e-05 | 4.30827307709758e-05 | 48.92% | 95.79% | 1.96x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.429755432064159e-05 | 4.2994382334436275e-05 | 49.00% | 96.07% | 1.96x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.446489669557136e-05 | 4.4600037898802836e-05 | 47.20% | 89.38% | 1.89x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.402051142189039e-05 | 4.22488730784917e-05 | 49.72% | 98.87% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.218047823464698e-05 | 4.103824459024313e-05 | 50.06% | 100.25% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.176072860832714e-05 | 4.2588531176881566e-05 | 47.91% | 91.98% | 1.92x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.399424687768115e-05 | 4.2714557955351976e-05 | 49.15% | 96.64% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.40445619740451e-05 | 4.3037490584356845e-05 | 48.79% | 95.28% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010515303135258526 | 5.9821004419146956e-05 | 43.11% | 75.78% | 1.76x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.404223316215489e-05 | 4.26786307899187e-05 | 49.22% | 96.92% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.368584750858537e-05 | 4.2549141293729296e-05 | 49.16% | 96.68% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.231492629284868e-05 | 4.2217955936264966e-05 | 48.71% | 94.98% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.32608604265321e-05 | 4.1930200063984205e-05 | 49.64% | 98.57% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.387764829178889e-05 | 4.292140235607164e-05 | 48.83% | 95.42% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.48491752489194e-05 | 4.339098108988457e-05 | 48.86% | 95.55% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.853647223433708e-05 | 5.565253100190684e-05 | 43.52% | 77.06% | 1.77x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.291866375364355e-05 | 4.2542637894979894e-05 | 48.69% | 94.91% | 1.95x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.877054785636267e-05 | 5.525891052394579e-05 | 44.05% | 78.74% | 1.79x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.455991823047096e-05 | 4.250526424750899e-05 | 49.73% | 98.94% | 1.99x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.327398138653653e-05 | 4.215990267865248e-05 | 49.37% | 97.52% | 1.98x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.343577996918184e-05 | 4.1220897241230344e-05 | 50.60% | 102.41% | 2.02x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.356354495811985e-05 | 4.2636882024064906e-05 | 48.98% | 95.99% | 1.96x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.340982491431179e-05 | 4.377842618717124e-05 | 47.51% | 90.53% | 1.91x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.401094536445057e-05 | 4.288012031661933e-05 | 48.96% | 95.92% | 1.96x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.460458871043085e-05 | 4.320936548678055e-05 | 48.93% | 95.80% | 1.96x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.394223359503636e-05 | 4.2801859819761185e-05 | 49.01% | 96.12% | 1.96x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.392515025894756e-05 | 4.308692111048442e-05 | 48.66% | 94.78% | 1.95x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.299533648998603e-05 | 2.4719819772406667e-05 | 42.51% | 73.93% | 1.74x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.258941234401286e-05 | 2.377651957332371e-05 | 44.17% | 79.12% | 1.79x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.2516184978060746e-05 | 2.3941213560788086e-05 | 43.69% | 77.59% | 1.78x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.2841348789673886e-05 | 2.4105435632881934e-05 | 43.73% | 77.72% | 1.78x | ✅ |
| `hexbytes_new[palindrome]` | 4.301004642476357e-05 | 2.3851421302044103e-05 | 44.54% | 80.32% | 1.80x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.3282173337803736e-05 | 2.4199176934065272e-05 | 44.09% | 78.86% | 1.79x | ✅ |
| `hexbytes_new[single 0xff]` | 4.317852371000746e-05 | 2.4371916823411065e-05 | 43.56% | 77.17% | 1.77x | ✅ |
| `hexbytes_new[single null byte]` | 4.238882399419895e-05 | 2.4223107255441787e-05 | 42.85% | 74.99% | 1.75x | ✅ |
| `hexbytes_new[two patterns]` | 4.339844061174987e-05 | 2.4473138198880817e-05 | 43.61% | 77.33% | 1.77x | ✅ |
| `hexbytes_repr[0-9]` | 3.490555499582727e-05 | 1.5425634851877372e-05 | 55.81% | 126.28% | 2.26x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.0001247008800603489 | 4.193976968640125e-05 | 66.37% | 197.33% | 2.97x | ✅ |
| `hexbytes_repr[all byte values]` | 0.0001242515950218129 | 4.1974177875740424e-05 | 66.22% | 196.02% | 2.96x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.4883183836082034e-05 | 2.0941781773099864e-05 | 61.84% | 162.08% | 2.62x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.514390531943143e-05 | 2.09317281530038e-05 | 62.04% | 163.45% | 2.63x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.556700244004229e-05 | 1.8998634093486546e-05 | 58.31% | 139.84% | 2.40x | ✅ |
| `hexbytes_repr[b'']` | 2.52062925190879e-05 | 1.2049527755822458e-05 | 52.20% | 109.19% | 2.09x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 4.185440173796787e-05 | 1.757618335116192e-05 | 58.01% | 138.13% | 2.38x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 3.2820035866263004e-05 | 1.4522661471739825e-05 | 55.75% | 125.99% | 2.26x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.68323378422327e-05 | 2.4037453691979578e-05 | 64.03% | 178.03% | 2.78x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007690323960938272 | 0.00022351864874670498 | 70.94% | 244.06% | 3.44x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 3.189169768237944e-05 | 1.4685302759333823e-05 | 53.95% | 117.17% | 2.17x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 3.291110030776851e-05 | 1.4596617430078882e-05 | 55.65% | 125.47% | 2.25x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.380893733190446e-05 | 1.510969234481174e-05 | 55.31% | 123.76% | 2.24x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.369725584346999e-05 | 1.5328426854978562e-05 | 54.51% | 119.84% | 2.20x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 3.2780654013087794e-05 | 1.4431238867078547e-05 | 55.98% | 127.15% | 2.27x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.4158272936518146e-05 | 2.0822038151709844e-05 | 61.55% | 160.10% | 2.60x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.0004036825285334564 | 0.00012308764037959665 | 69.51% | 227.96% | 3.28x | ✅ |
| `hexbytes_repr[b'abc']` | 3.1668834769316045e-05 | 1.4814070308394542e-05 | 53.22% | 113.78% | 2.14x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0004045786093232361 | 0.00012240188226389674 | 69.75% | 230.53% | 3.31x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.00010256725461669562 | 3.578585038956769e-05 | 65.11% | 186.61% | 2.87x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.475948933025641e-05 | 1.53339197634907e-05 | 55.89% | 126.68% | 2.27x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.3601778634577264e-05 | 1.492411565625904e-05 | 55.59% | 125.15% | 2.25x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 3.2763172324618237e-05 | 1.470599790062105e-05 | 55.11% | 122.79% | 2.23x | ✅ |
| `hexbytes_repr[palindrome]` | 3.771349489635731e-05 | 1.623382131982157e-05 | 56.95% | 132.31% | 2.32x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.683438420286503e-05 | 2.4135681670340016e-05 | 63.89% | 176.91% | 2.77x | ✅ |
| `hexbytes_repr[single 0xff]` | 3.1088207418015615e-05 | 1.4306506118139552e-05 | 53.98% | 117.30% | 2.17x | ✅ |
| `hexbytes_repr[single null byte]` | 3.086582254230636e-05 | 1.4223580663659161e-05 | 53.92% | 117.00% | 2.17x | ✅ |
| `hexbytes_repr[two patterns]` | 5.508419163565201e-05 | 2.0837525446329114e-05 | 62.17% | 164.35% | 2.64x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.7537283157766567e-05 | 1.422503880033203e-05 | 18.89% | 23.28% | 1.23x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.360507223564458e-05 | 4.062286111203149e-05 | 6.84% | 7.34% | 1.07x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.373096275646272e-05 | 4.054997739677631e-05 | 7.27% | 7.84% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.2491925766410494e-05 | 1.9483048391255473e-05 | 13.38% | 15.44% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.2545402288405447e-05 | 1.951308574520891e-05 | 13.45% | 15.54% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.0396836923536468e-05 | 1.7564540364346808e-05 | 13.89% | 16.13% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0104927408546997e-05 | 1.1138506215264353e-05 | -10.23% | -9.28% | 0.91x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.9074035632006816e-05 | 1.6211040745703643e-05 | 15.01% | 17.66% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.7054422120430525e-05 | 1.3537558186233056e-05 | 20.62% | 25.98% | 1.26x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.6190576078565058e-05 | 2.2964920441720837e-05 | 12.32% | 14.05% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022495933001590105 | 0.000222297108888994 | 1.18% | 1.20% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.6311384090224053e-05 | 1.3670889091005301e-05 | 16.19% | 19.31% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.7089724637033258e-05 | 1.3632370853901817e-05 | 20.23% | 25.36% | 1.25x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.740318216099604e-05 | 1.4074100606337144e-05 | 19.13% | 23.65% | 1.24x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.7394057774498754e-05 | 1.4017837121183157e-05 | 19.41% | 24.09% | 1.24x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.686358573671008e-05 | 1.3533571267649271e-05 | 19.75% | 24.61% | 1.25x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.2444296828238604e-05 | 1.951565958055269e-05 | 13.05% | 15.01% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012435628589300447 | 0.00012187931474146517 | 1.99% | 2.03% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.630710439320785e-05 | 1.3664017978303974e-05 | 16.21% | 19.34% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.0001249078929107132 | 0.00012136934238638091 | 2.83% | 2.92% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.641841064890231e-05 | 3.3389327283819026e-05 | 8.32% | 9.07% | 1.09x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.746949315689661e-05 | 1.4230736807306966e-05 | 18.54% | 22.76% | 1.23x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.845738163917752e-05 | 1.4252688438628928e-05 | 22.78% | 29.50% | 1.30x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.6960874262706443e-05 | 1.3683946721343905e-05 | 19.32% | 23.95% | 1.24x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.7951774774847328e-05 | 1.5085474724176013e-05 | 15.97% | 19.00% | 1.19x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.6150782505671285e-05 | 2.2874878770790106e-05 | 12.53% | 14.32% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.5917953691173265e-05 | 1.3130278659174311e-05 | 17.51% | 21.23% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.5894818417904543e-05 | 1.306914838165395e-05 | 17.78% | 21.62% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.2445099041476964e-05 | 1.941378277596355e-05 | 13.51% | 15.61% | 1.16x | ✅ |
