#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/renovate/actions-checkout-6.x/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/renovate/actions-checkout-6.x/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.3020959297481694e-05 | 2.1739986884497455e-05 | 5.56% | 5.89% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.300412966534862e-05 | 2.1722046329098367e-05 | 5.57% | 5.90% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.301742114431169e-05 | 2.1729543302589158e-05 | 5.60% | 5.93% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.301641622791067e-05 | 2.174761705212414e-05 | 5.51% | 5.83% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.3031106074037615e-05 | 2.1752943307869806e-05 | 5.55% | 5.88% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.3041730313331767e-05 | 2.1706723924498453e-05 | 5.79% | 6.15% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.299309562726555e-05 | 2.1702518390433407e-05 | 5.61% | 5.95% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.3048072626349687e-05 | 2.170916175077178e-05 | 5.81% | 6.17% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.3763062297954663e-05 | 2.1733609134609676e-05 | 8.54% | 9.34% | 1.09x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.3038359693796465e-05 | 2.169960876744348e-05 | 5.81% | 6.17% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.3038310908780568e-05 | 2.1759539375097154e-05 | 5.55% | 5.88% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3930574991283535e-05 | 2.173092793079422e-05 | 9.19% | 10.12% | 1.10x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.3048757309301583e-05 | 2.1708300480588226e-05 | 5.82% | 6.17% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.301397591895462e-05 | 2.171477002120493e-05 | 5.65% | 5.98% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.3061061653868163e-05 | 2.1767746767778996e-05 | 5.61% | 5.94% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.2994771915842888e-05 | 2.1751273571555555e-05 | 5.41% | 5.72% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.298378185175296e-05 | 2.1755876457188948e-05 | 5.34% | 5.64% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.322095705960423e-05 | 2.1738809438013013e-05 | 6.38% | 6.82% | 1.07x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.30023483319521e-05 | 2.1719871432725388e-05 | 5.58% | 5.90% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.3034476119815862e-05 | 2.1705181576267988e-05 | 5.77% | 6.12% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.3004830906654352e-05 | 2.1731089392315635e-05 | 5.54% | 5.86% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.3009660409752888e-05 | 2.1724774428083385e-05 | 5.58% | 5.91% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.3031641967591177e-05 | 2.1733365212867527e-05 | 5.64% | 5.97% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.3005574812499662e-05 | 2.1733434002794417e-05 | 5.53% | 5.85% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.3002641531368553e-05 | 2.171926197918737e-05 | 5.58% | 5.91% | 1.06x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.302316022821028e-05 | 2.1728085713492903e-05 | 5.63% | 5.96% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.246513142310754e-05 | 2.104941049846949e-05 | 6.30% | 6.73% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.2461477843508415e-05 | 2.110270944329218e-05 | 6.05% | 6.44% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.250210002024325e-05 | 2.109223178727304e-05 | 6.27% | 6.68% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.245945506883639e-05 | 2.1046586455914404e-05 | 6.29% | 6.71% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.2597640718611543e-05 | 2.113512938257096e-05 | 6.47% | 6.92% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.247882548213016e-05 | 2.1141430590720834e-05 | 5.95% | 6.33% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.251771434335045e-05 | 2.105796560078326e-05 | 6.48% | 6.93% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.2469623500303692e-05 | 2.1048715838818406e-05 | 6.32% | 6.75% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.249709062246807e-05 | 2.1119910747321294e-05 | 6.12% | 6.52% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.2467998334600003e-05 | 2.116462576231606e-05 | 5.80% | 6.16% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.2478382995857777e-05 | 2.1170500108131572e-05 | 5.82% | 6.18% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.24681336655633e-05 | 2.113217654422497e-05 | 5.95% | 6.32% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.2453156706273503e-05 | 2.1126541853040766e-05 | 5.91% | 6.28% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.2473689397139794e-05 | 2.1131737550698712e-05 | 5.97% | 6.35% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.2466794079926015e-05 | 2.1147200796039673e-05 | 5.87% | 6.24% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.2585311125596174e-05 | 2.115827070209486e-05 | 6.32% | 6.74% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.2487942216682676e-05 | 2.116452251592245e-05 | 5.89% | 6.25% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.2474372397956827e-05 | 2.1136804508355363e-05 | 5.95% | 6.33% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.246721059806608e-05 | 2.1073711344489832e-05 | 6.20% | 6.61% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.2492695056621264e-05 | 2.113988866478919e-05 | 6.01% | 6.40% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.2474491039976545e-05 | 2.1070646474293727e-05 | 6.25% | 6.66% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.245740389785577e-05 | 2.1203810682214196e-05 | 5.58% | 5.91% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.2525531543111842e-05 | 2.115823055897389e-05 | 6.07% | 6.46% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.2505972241718305e-05 | 2.1149060306331645e-05 | 6.03% | 6.42% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.261776813275654e-05 | 2.1060850780620987e-05 | 6.88% | 7.39% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.2702291818503786e-05 | 2.1138300111223602e-05 | 6.89% | 7.40% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.245421010270525e-05 | 2.1048944109301912e-05 | 6.26% | 6.68% | 1.07x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.2564472227523472e-05 | 2.1039672887645688e-05 | 6.76% | 7.25% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.2483164703892084e-05 | 2.123993837362828e-05 | 5.53% | 5.85% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.2479452298796394e-05 | 2.1150552410774346e-05 | 5.91% | 6.28% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.2470417196807798e-05 | 2.1165072963212073e-05 | 5.81% | 6.17% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.2498773140137432e-05 | 2.1214292394027068e-05 | 5.71% | 6.05% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.2487387456774452e-05 | 2.146369987028761e-05 | 4.55% | 4.77% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.253040730121713e-05 | 2.1128693233643102e-05 | 6.22% | 6.63% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.255697115333313e-05 | 2.10658449071201e-05 | 6.61% | 7.08% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.247996755571362e-05 | 2.118303846844658e-05 | 5.77% | 6.12% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.2548065652364406e-05 | 2.117841934535497e-05 | 6.07% | 6.47% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.2461423411686372e-05 | 2.1157280094782912e-05 | 5.81% | 6.16% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.267771053659673e-05 | 2.118089506546659e-05 | 6.60% | 7.07% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.2482615684675232e-05 | 2.1210793501212883e-05 | 5.66% | 6.00% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.2483003205514245e-05 | 2.116549533876597e-05 | 5.86% | 6.22% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.2505954410103722e-05 | 2.1184086534781344e-05 | 5.87% | 6.24% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.2487033699957284e-05 | 2.123650111872635e-05 | 5.56% | 5.89% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.2566488420136252e-05 | 2.1159715769701314e-05 | 6.23% | 6.65% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.2572766236772836e-05 | 2.117264129740449e-05 | 6.20% | 6.61% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.2565663164978327e-05 | 2.1133064201362653e-05 | 6.35% | 6.78% | 1.07x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.245864846007629e-05 | 2.115728732345205e-05 | 5.79% | 6.15% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.2516813469877277e-05 | 2.1143348784890215e-05 | 6.10% | 6.50% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.2487920708117674e-05 | 2.1212441313604814e-05 | 5.67% | 6.01% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.2474198363586596e-05 | 2.1163376055305616e-05 | 5.83% | 6.19% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.2481917897206204e-05 | 2.117401999101871e-05 | 5.82% | 6.18% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.248592664054931e-05 | 2.1166228473837086e-05 | 5.87% | 6.23% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.2539422576419788e-05 | 2.1223025814994897e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.2546327624739313e-05 | 2.1204281705154184e-05 | 5.95% | 6.33% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.2493017269989475e-05 | 2.113580352081325e-05 | 6.03% | 6.42% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.245848848069835e-05 | 2.114737216370617e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.245659640279905e-05 | 2.1153091118991542e-05 | 5.80% | 6.16% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.2494106456927585e-05 | 2.1037721263709835e-05 | 6.47% | 6.92% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.2488916403129053e-05 | 2.112727278791813e-05 | 6.05% | 6.44% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.244837439977764e-05 | 2.113219863318681e-05 | 5.86% | 6.23% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.257546687009417e-05 | 2.1043928377872375e-05 | 6.78% | 7.28% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.248800751976928e-05 | 2.1074923433298484e-05 | 6.28% | 6.71% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.246588442125328e-05 | 2.1121955589964718e-05 | 5.98% | 6.36% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.244925613679065e-05 | 2.1130123159106905e-05 | 5.88% | 6.24% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.2523630767357926e-05 | 2.1147251535625434e-05 | 6.11% | 6.51% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.2476488808453715e-05 | 2.115611372929873e-05 | 5.87% | 6.24% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.2528080175726876e-05 | 2.1149429077072782e-05 | 6.12% | 6.52% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.2481409709941718e-05 | 2.114038258512954e-05 | 5.97% | 6.34% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.2452804387079773e-05 | 2.1125377627183835e-05 | 5.91% | 6.28% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.2507962486249866e-05 | 2.1135033194065037e-05 | 6.10% | 6.50% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.2502944479176253e-05 | 2.113016612436668e-05 | 6.10% | 6.50% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.2493951825210727e-05 | 2.1150380721838132e-05 | 5.97% | 6.35% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.2480564392852076e-05 | 2.1033392769845392e-05 | 6.44% | 6.88% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.2464404338984255e-05 | 2.1129559454137067e-05 | 5.94% | 6.32% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.244587336050547e-05 | 2.1153117904041855e-05 | 5.76% | 6.11% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.2448927317821136e-05 | 2.1137561690754985e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.245332708767361e-05 | 2.1130011638365828e-05 | 5.89% | 6.26% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.2466892459236247e-05 | 2.1155701165805233e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.249721898889356e-05 | 2.1121855942668936e-05 | 6.11% | 6.51% | 1.07x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.2473499950730395e-05 | 2.10383476927992e-05 | 6.39% | 6.82% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.2456846020346423e-05 | 2.1156461872026497e-05 | 5.79% | 6.15% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.2433525442404095e-05 | 2.1160906338183256e-05 | 5.67% | 6.01% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.245458517979371e-05 | 2.1123765820307255e-05 | 5.93% | 6.30% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.2486488863845165e-05 | 2.113036800506851e-05 | 6.03% | 6.42% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.2480942913478083e-05 | 2.1130611396530584e-05 | 6.01% | 6.39% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.245246776348487e-05 | 2.115393333157439e-05 | 5.78% | 6.14% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.2580677594179165e-05 | 2.1038128535662505e-05 | 6.83% | 7.33% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.2457434120829866e-05 | 2.1128112066977776e-05 | 5.92% | 6.29% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.2454892839456324e-05 | 2.114117815721132e-05 | 5.85% | 6.21% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.2471309562926507e-05 | 2.1138808275919373e-05 | 5.93% | 6.30% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.2473284562172694e-05 | 2.115515606543454e-05 | 5.87% | 6.23% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.2474128638703993e-05 | 2.1125808155172674e-05 | 6.00% | 6.38% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.2585086091161413e-05 | 2.114679918855873e-05 | 6.37% | 6.80% | 1.07x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.2454073376778905e-05 | 2.112778259784618e-05 | 5.91% | 6.28% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.2505513750289705e-05 | 2.113677909785346e-05 | 6.08% | 6.48% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.2471224418624792e-05 | 2.1121648634105215e-05 | 6.01% | 6.39% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.2469375527504832e-05 | 2.113388484135508e-05 | 5.94% | 6.32% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.2453138478874926e-05 | 2.115236161485995e-05 | 5.79% | 6.15% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.2485467001145632e-05 | 2.1146570463698764e-05 | 5.95% | 6.33% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.245021289244822e-05 | 2.1166416305956854e-05 | 5.72% | 6.07% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.247298416342296e-05 | 2.1147883865626413e-05 | 5.90% | 6.27% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.2465145235290095e-05 | 2.1138369482711828e-05 | 5.91% | 6.28% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.2441622838513553e-05 | 2.1149983871784316e-05 | 5.76% | 6.11% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.2529748644348487e-05 | 2.116932196804519e-05 | 6.04% | 6.43% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.244030654312971e-05 | 2.1195281207273097e-05 | 5.55% | 5.87% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.2435807623328495e-05 | 2.1066603626290463e-05 | 6.10% | 6.50% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.2461003114924155e-05 | 2.1141178569678433e-05 | 5.88% | 6.24% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.2447998408147515e-05 | 2.1064331061785205e-05 | 6.16% | 6.57% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.2462053620519445e-05 | 2.1169166662637826e-05 | 5.76% | 6.11% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.246405800961887e-05 | 2.113105100771942e-05 | 5.93% | 6.31% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.2456008235993816e-05 | 2.103566856642961e-05 | 6.32% | 6.75% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.246426940663519e-05 | 2.1168836478365748e-05 | 5.77% | 6.12% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.243680638871735e-05 | 2.114187353189011e-05 | 5.77% | 6.12% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.245009713356577e-05 | 2.114201981295067e-05 | 5.83% | 6.19% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.2438470921331055e-05 | 2.1341753307672752e-05 | 4.89% | 5.14% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.2445663448019324e-05 | 2.1147167032555003e-05 | 5.79% | 6.14% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.2455651907415848e-05 | 2.1150155009176097e-05 | 5.81% | 6.17% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.24545605897765e-05 | 2.1179853078444296e-05 | 5.68% | 6.02% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.245760990121804e-05 | 2.1058981551146894e-05 | 6.23% | 6.64% | 1.07x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.2443476730193447e-05 | 2.115822734172645e-05 | 5.73% | 6.07% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.2444540422533523e-05 | 2.1141918236339242e-05 | 5.80% | 6.16% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.245135496924478e-05 | 2.1142455733462536e-05 | 5.83% | 6.19% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.244890628441091e-05 | 2.115283014128167e-05 | 5.77% | 6.13% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.2442184145861594e-05 | 2.1141976457761907e-05 | 5.79% | 6.15% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.2436476554549562e-05 | 2.1168092222993624e-05 | 5.65% | 5.99% | 1.06x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.245650433822005e-05 | 2.105584565328163e-05 | 6.24% | 6.65% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.244997354458425e-05 | 2.11429361158995e-05 | 5.82% | 6.18% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.247183215785455e-05 | 2.1157256549808467e-05 | 5.85% | 6.21% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.246046472060305e-05 | 2.1162806546364935e-05 | 5.78% | 6.13% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.2457500847871205e-05 | 2.1140095290093027e-05 | 5.87% | 6.23% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.2496454864255958e-05 | 2.1129537818417243e-05 | 6.08% | 6.47% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.2452564246071508e-05 | 2.112328274800632e-05 | 5.92% | 6.29% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.2457350596187544e-05 | 2.1050649865164974e-05 | 6.26% | 6.68% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.2466808203200112e-05 | 2.1134790569484e-05 | 5.93% | 6.30% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.2474181075218776e-05 | 2.1162367385804902e-05 | 5.84% | 6.20% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.2466470823171555e-05 | 2.113813189299656e-05 | 5.91% | 6.28% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.2463135875833173e-05 | 2.1155783717267837e-05 | 5.82% | 6.18% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.2425486970814455e-05 | 2.1154586518831323e-05 | 5.67% | 6.01% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.243560389984916e-05 | 2.1135951715590237e-05 | 5.79% | 6.15% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.2459668300166193e-05 | 2.1197431264405332e-05 | 5.62% | 5.95% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.256475331674365e-05 | 2.1138928814356146e-05 | 6.32% | 6.75% | 1.07x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.2472630548754467e-05 | 2.116180322487238e-05 | 5.83% | 6.19% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.2493742211632164e-05 | 2.1133104189087146e-05 | 6.05% | 6.44% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.2443401603312802e-05 | 2.119863785022162e-05 | 5.55% | 5.87% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.2448339962915643e-05 | 2.114954768356507e-05 | 5.79% | 6.14% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.252209407497214e-05 | 2.1130562806833658e-05 | 6.18% | 6.59% | 1.07x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 7.62474276776005e-05 | 5.385509618923891e-05 | 29.37% | 41.58% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 7.74531036557635e-05 | 5.381101088611419e-05 | 30.52% | 43.94% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 7.67315446257404e-05 | 5.3841965647753486e-05 | 29.83% | 42.51% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 7.674205730950286e-05 | 5.388134431627596e-05 | 29.79% | 42.43% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 7.592231867357185e-05 | 5.377360143354947e-05 | 29.17% | 41.19% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 7.488064624402909e-05 | 5.386411962506019e-05 | 28.07% | 39.02% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.29972062053508e-05 | 5.154906569851157e-05 | 29.38% | 41.61% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 7.553153652282555e-05 | 5.405066167094975e-05 | 28.44% | 39.74% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 7.503825752002224e-05 | 5.4925452727417905e-05 | 26.80% | 36.62% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 7.682369769102666e-05 | 5.386865095450644e-05 | 29.88% | 42.61% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 7.571483859178682e-05 | 5.426757995317956e-05 | 28.33% | 39.52% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 7.645495704253875e-05 | 5.4037503759650874e-05 | 29.32% | 41.48% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.594252066488726e-05 | 5.398294771806016e-05 | 28.92% | 40.68% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 7.37944289484236e-05 | 5.390968236720922e-05 | 26.95% | 36.89% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 7.716295202060875e-05 | 5.3716561155559735e-05 | 30.39% | 43.65% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 7.636838930375775e-05 | 5.373759424477277e-05 | 29.63% | 42.11% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 7.590063367724172e-05 | 5.3681514195766074e-05 | 29.27% | 41.39% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 7.63686456248429e-05 | 5.4853270875964134e-05 | 28.17% | 39.22% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 7.531454313109143e-05 | 5.365478710482949e-05 | 28.76% | 40.37% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 7.496894834006809e-05 | 5.367851178136791e-05 | 28.40% | 39.66% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 7.622316215998504e-05 | 5.378574498171999e-05 | 29.44% | 41.72% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 7.558964999710852e-05 | 5.360110567801697e-05 | 29.09% | 41.02% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 7.56292156596374e-05 | 5.3815440623537696e-05 | 28.84% | 40.53% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 7.61102015773299e-05 | 5.39507460331452e-05 | 29.11% | 41.07% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 7.649111973756507e-05 | 5.37664001804564e-05 | 29.71% | 42.27% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 7.413951421237396e-05 | 5.43563937658294e-05 | 26.68% | 36.40% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.133995420322853e-05 | 5.1467135957626444e-05 | 27.86% | 38.61% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.310035722747472e-05 | 5.125983307927999e-05 | 29.88% | 42.61% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 7.672248517618131e-05 | 5.382915949929193e-05 | 29.84% | 42.53% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 7.47709765953782e-05 | 5.4847646099855006e-05 | 26.65% | 36.32% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 7.5680011407221e-05 | 5.488266593054743e-05 | 27.48% | 37.89% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 7.782660910408177e-05 | 5.458590735271591e-05 | 29.86% | 42.58% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 7.763946200191118e-05 | 5.4607863625657934e-05 | 29.66% | 42.18% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 7.833459095256137e-05 | 5.488294953040575e-05 | 29.94% | 42.73% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 7.699072704294492e-05 | 5.4834333125210235e-05 | 28.78% | 40.41% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.375571734105701e-05 | 5.247056715300223e-05 | 28.86% | 40.57% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 7.749593222712751e-05 | 5.550154369336165e-05 | 28.38% | 39.63% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 7.59221659671215e-05 | 5.504044299486838e-05 | 27.50% | 37.94% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 7.67651908641165e-05 | 5.4820348383672734e-05 | 28.59% | 40.03% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 7.680300443299038e-05 | 5.463247831889413e-05 | 28.87% | 40.58% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 7.703025309233485e-05 | 5.490930510667935e-05 | 28.72% | 40.29% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.721485625201311e-05 | 5.503011114375325e-05 | 28.73% | 40.31% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 7.778021862721584e-05 | 5.492127704707004e-05 | 29.39% | 41.62% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 7.80633400225725e-05 | 5.45960209956159e-05 | 30.06% | 42.98% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 7.707298089245608e-05 | 5.466097746085098e-05 | 29.08% | 41.00% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 7.770410784850229e-05 | 5.488517516992693e-05 | 29.37% | 41.58% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 7.697649770796558e-05 | 5.457212310763515e-05 | 29.11% | 41.05% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 7.874583374932421e-05 | 5.478224652658398e-05 | 30.43% | 43.74% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 7.747547819796061e-05 | 5.467353987624401e-05 | 29.43% | 41.71% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 7.446865510392878e-05 | 5.488061231446979e-05 | 26.30% | 35.69% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 7.713056741329752e-05 | 5.491590916965592e-05 | 28.80% | 40.45% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 7.720657100265632e-05 | 5.4585538829545286e-05 | 29.30% | 41.44% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 7.752059789487836e-05 | 5.4779753500300815e-05 | 29.34% | 41.51% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 7.63227870020508e-05 | 5.496550492444352e-05 | 27.98% | 38.86% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 7.687704270126508e-05 | 5.5062585029471416e-05 | 28.38% | 39.62% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.212871036246041e-05 | 5.249848097416533e-05 | 27.22% | 37.39% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.411331951829575e-05 | 5.248907316069792e-05 | 29.18% | 41.20% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 7.746692087613001e-05 | 5.4897850022184835e-05 | 29.13% | 41.11% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 7.738704535246723e-05 | 5.48043759182486e-05 | 29.18% | 41.21% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 7.490533259789806e-05 | 5.482869136643334e-05 | 26.80% | 36.62% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 7.721258545213102e-05 | 5.706139575409931e-05 | 26.10% | 35.31% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 7.640741920253575e-05 | 5.518650529297038e-05 | 27.77% | 38.45% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 7.69197459788852e-05 | 5.5086094239857184e-05 | 28.38% | 39.64% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 7.65911247991239e-05 | 5.511103709901394e-05 | 28.05% | 38.98% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.341298879542802e-05 | 5.247104518321223e-05 | 28.53% | 39.91% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 7.787221275559434e-05 | 5.486409295514447e-05 | 29.55% | 41.94% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 7.757772739731646e-05 | 5.4902683018593355e-05 | 29.23% | 41.30% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 7.755638817551077e-05 | 5.485109625122223e-05 | 29.28% | 41.39% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 7.751031335203541e-05 | 5.494023083601164e-05 | 29.12% | 41.08% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 7.773521854196533e-05 | 5.464173066665999e-05 | 29.71% | 42.26% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.659534981877323e-05 | 5.5023299522755195e-05 | 28.16% | 39.21% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 7.991955706457565e-05 | 5.48900695039956e-05 | 31.32% | 45.60% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 7.768274297265765e-05 | 5.544864278665327e-05 | 28.62% | 40.10% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 7.774356900807626e-05 | 5.474138815385569e-05 | 29.59% | 42.02% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 7.858884169241047e-05 | 5.4698683176173473e-05 | 30.40% | 43.68% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 7.359677842203915e-05 | 5.4658765702148e-05 | 25.73% | 34.65% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 7.746049064508376e-05 | 5.4788951010913795e-05 | 29.27% | 41.38% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 7.645711046120101e-05 | 5.474591626082972e-05 | 28.40% | 39.66% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 7.722779755673815e-05 | 5.497979881049684e-05 | 28.81% | 40.47% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 7.627943299991234e-05 | 5.487371674179898e-05 | 28.06% | 39.01% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 7.710599304901823e-05 | 5.498563599170968e-05 | 28.69% | 40.23% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 7.496800993283861e-05 | 5.488200512134753e-05 | 26.79% | 36.60% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 7.754699096894177e-05 | 5.52085170238256e-05 | 28.81% | 40.46% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 7.682789946826624e-05 | 5.510656212627547e-05 | 28.27% | 39.42% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.448175756723616e-05 | 5.257508404656139e-05 | 29.41% | 41.67% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 7.359077771242613e-05 | 5.2400642107490605e-05 | 28.79% | 40.44% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 7.712664171503039e-05 | 5.633096012074862e-05 | 26.96% | 36.92% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 7.455940985810885e-05 | 5.371361120557794e-05 | 27.96% | 38.81% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 7.693263933196824e-05 | 5.431197977968687e-05 | 29.40% | 41.65% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 7.794376790654736e-05 | 5.416107537029389e-05 | 30.51% | 43.91% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 7.683256718170994e-05 | 5.371087539580267e-05 | 30.09% | 43.05% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 7.64902162227171e-05 | 5.374281482788001e-05 | 29.74% | 42.33% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 7.568454581047253e-05 | 5.370938521800734e-05 | 29.04% | 40.91% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.29026452677377e-05 | 5.164148722434391e-05 | 29.16% | 41.17% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 7.622733940196874e-05 | 5.385174906536458e-05 | 29.35% | 41.55% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 7.673273104738246e-05 | 5.3958585750575615e-05 | 29.68% | 42.21% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 7.555337995473957e-05 | 5.441260098728427e-05 | 27.98% | 38.85% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 9.40040293040259e-05 | 7.320190592983669e-05 | 22.13% | 28.42% | 1.28x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.255862276343242e-05 | 5.118888403225568e-05 | 29.45% | 41.75% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.587914776217092e-05 | 5.402660752963092e-05 | 28.80% | 40.45% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 7.663845845338008e-05 | 5.417575202709626e-05 | 29.31% | 41.46% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 7.594634531254445e-05 | 5.369086666981367e-05 | 29.30% | 41.45% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 7.652534429424888e-05 | 5.432117416741733e-05 | 29.02% | 40.88% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 7.683505296620616e-05 | 5.384755433749315e-05 | 29.92% | 42.69% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.158730163859092e-05 | 7.050340540184576e-05 | 23.02% | 29.90% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.33658882560211e-05 | 5.1442199432831204e-05 | 29.88% | 42.62% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.066650216706854e-05 | 7.012576452394922e-05 | 22.66% | 29.29% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 7.72459984765671e-05 | 5.3903845597224724e-05 | 30.22% | 43.30% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 7.616830067350273e-05 | 5.3531678745685734e-05 | 29.72% | 42.29% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 7.565061916490975e-05 | 5.391685955895527e-05 | 28.73% | 40.31% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 7.654509130628043e-05 | 5.375142877449579e-05 | 29.78% | 42.41% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 7.661030553270847e-05 | 5.384223318745136e-05 | 29.72% | 42.29% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 7.642054769783814e-05 | 5.394394597681648e-05 | 29.41% | 41.67% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.36904555427344e-05 | 5.138010219081459e-05 | 30.28% | 43.42% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.251070241119549e-05 | 5.129143101677755e-05 | 29.26% | 41.37% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 7.643667508287721e-05 | 5.36689126618178e-05 | 29.79% | 42.42% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.623543342561727e-05 | 5.268629653305413e-05 | 30.89% | 44.70% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 7.615470102605409e-05 | 5.364727204743204e-05 | 29.55% | 41.95% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 7.644815589929872e-05 | 5.364974798553131e-05 | 29.82% | 42.49% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.5672893532538e-05 | 5.3013233959668664e-05 | 29.94% | 42.74% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.503060092511084e-05 | 5.2984762346347446e-05 | 29.38% | 41.61% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.553544661918612e-05 | 5.3127292482795634e-05 | 29.67% | 42.18% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.15936674795647e-05 | 5.015303520000634e-05 | 29.95% | 42.75% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.57860659337548e-05 | 5.25192821818307e-05 | 30.70% | 44.30% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.530154817664545e-05 | 5.3021143691149575e-05 | 29.59% | 42.02% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.550448947776502e-05 | 5.314954957874743e-05 | 29.61% | 42.06% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 9.518156283136877e-05 | 7.239449677736158e-05 | 23.94% | 31.48% | 1.31x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.505001048997778e-05 | 5.289182247790689e-05 | 29.52% | 41.89% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.496253839337474e-05 | 5.3005601793581755e-05 | 29.29% | 41.42% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.475628396633273e-05 | 5.280013062550463e-05 | 29.37% | 41.58% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.596775350408282e-05 | 5.2694198881797045e-05 | 30.64% | 44.17% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.450056173190269e-05 | 5.300338713517826e-05 | 28.86% | 40.56% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.475977630170896e-05 | 5.2780785678926154e-05 | 29.40% | 41.64% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 8.98172406981238e-05 | 6.95598059776057e-05 | 22.55% | 29.12% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.539699820408533e-05 | 5.258910433175706e-05 | 30.25% | 43.37% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 8.97474757847206e-05 | 6.92169895672044e-05 | 22.88% | 29.66% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.499568321690228e-05 | 5.328531960844183e-05 | 28.95% | 40.74% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.516692726026601e-05 | 5.2798390784808394e-05 | 29.76% | 42.37% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.48351226113418e-05 | 5.280531788570869e-05 | 29.44% | 41.72% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.165004211002308e-05 | 5.284995435831624e-05 | 26.24% | 35.57% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.624964876276142e-05 | 5.328209383256722e-05 | 30.12% | 43.11% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.436219724206734e-05 | 5.270277692653291e-05 | 29.13% | 41.10% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.16254533546552e-05 | 5.063050029331876e-05 | 29.31% | 41.47% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.178908410512338e-05 | 5.060989060861873e-05 | 29.50% | 41.85% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.313188089407231e-05 | 5.2981526032155965e-05 | 27.55% | 38.03% | 1.38x | ✅ |
| `hexbytes_new['']` | 6.329377927103148e-05 | 3.228689184857943e-05 | 48.99% | 96.04% | 1.96x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 8.075262375574724e-05 | 4.5932467697621645e-05 | 43.12% | 75.81% | 1.76x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 8.116661791419436e-05 | 4.597251929521581e-05 | 43.36% | 76.55% | 1.77x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.017703328334761e-05 | 4.214202664947607e-05 | 47.44% | 90.25% | 1.90x | ✅ |
| `hexbytes_new['0x']` | 7.160506385790763e-05 | 3.27061101497538e-05 | 54.32% | 118.93% | 2.19x | ✅ |
| `hexbytes_new['0x1234']` | 7.424844031884346e-05 | 3.929379061092473e-05 | 47.08% | 88.96% | 1.89x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 7.518800221131673e-05 | 3.944455103215942e-05 | 47.54% | 90.62% | 1.91x | ✅ |
| `hexbytes_new['0xabcdef']` | 7.433768425227798e-05 | 3.94476523398692e-05 | 46.93% | 88.45% | 1.88x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 7.519784510466766e-05 | 3.952431070360783e-05 | 47.44% | 90.26% | 1.90x | ✅ |
| `hexbytes_new['abc']` | 7.47373238367541e-05 | 4.1402906896819165e-05 | 44.60% | 80.51% | 1.81x | ✅ |
| `hexbytes_new['deadbeef']` | 6.830193924074235e-05 | 3.719942749677856e-05 | 45.54% | 83.61% | 1.84x | ✅ |
| `hexbytes_new[0-9]` | 3.9170198226462886e-05 | 2.2693255785905675e-05 | 42.06% | 72.61% | 1.73x | ✅ |
| `hexbytes_new[0]` | 0.00011944361541148015 | 5.2725934647941305e-05 | 55.86% | 126.54% | 2.27x | ✅ |
| `hexbytes_new[123456]` | 0.00012267780141354272 | 5.593523369617782e-05 | 54.40% | 119.32% | 2.19x | ✅ |
| `hexbytes_new[2**16]` | 0.00012235199797868548 | 5.6612999687381906e-05 | 53.73% | 116.12% | 2.16x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00012968323934580553 | 6.314142843060298e-05 | 51.31% | 105.39% | 2.05x | ✅ |
| `hexbytes_new[2**32]` | 0.00012491044983114162 | 5.8850037866756315e-05 | 52.89% | 112.25% | 2.12x | ✅ |
| `hexbytes_new[2**64]` | 0.00012568751025441273 | 6.044563404083774e-05 | 51.91% | 107.93% | 2.08x | ✅ |
| `hexbytes_new[2**8]` | 0.0001225000795705188 | 5.5605385505424824e-05 | 54.61% | 120.30% | 2.20x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.1498127163246114e-05 | 2.529510022652627e-05 | 39.05% | 64.06% | 1.64x | ✅ |
| `hexbytes_new[False]` | 5.4890389748626024e-05 | 2.3585379188230472e-05 | 57.03% | 132.73% | 2.33x | ✅ |
| `hexbytes_new[True]` | 5.494173083951387e-05 | 2.3572541243306552e-05 | 57.10% | 133.08% | 2.33x | ✅ |
| `hexbytes_new[all byte values]` | 4.102671756660156e-05 | 2.5279117271380137e-05 | 38.38% | 62.29% | 1.62x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 3.945171265391019e-05 | 2.3006395072317505e-05 | 41.68% | 71.48% | 1.71x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 3.96484315799063e-05 | 2.2998720089871824e-05 | 41.99% | 72.39% | 1.72x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.0992323092433196e-05 | 2.274469326226034e-05 | 44.51% | 80.23% | 1.80x | ✅ |
| `hexbytes_new[b'']` | 3.92006746571682e-05 | 2.2504774977621525e-05 | 42.59% | 74.19% | 1.74x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 3.912048870549534e-05 | 2.3027601125542367e-05 | 41.14% | 69.89% | 1.70x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 3.9283767402215304e-05 | 2.2798451981751777e-05 | 41.96% | 72.31% | 1.72x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 3.936936192910629e-05 | 2.2863630086955618e-05 | 41.93% | 72.19% | 1.72x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 4.836109053211176e-05 | 3.175784875799166e-05 | 34.33% | 52.28% | 1.52x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 3.925528649035391e-05 | 2.2791609689306985e-05 | 41.94% | 72.24% | 1.72x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 3.925159637466606e-05 | 2.2799448619537345e-05 | 41.91% | 72.16% | 1.72x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 3.950738869386854e-05 | 2.2705011914560606e-05 | 42.53% | 74.00% | 1.74x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 3.916577365750514e-05 | 2.2710587495629996e-05 | 42.01% | 72.46% | 1.72x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 3.9339579402032995e-05 | 2.279807384340825e-05 | 42.05% | 72.56% | 1.73x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 3.942548649667665e-05 | 2.3043126517832597e-05 | 41.55% | 71.09% | 1.71x | ✅ |
| `hexbytes_new[b'a'*1024]` | 4.600570822116955e-05 | 2.9088830438716985e-05 | 36.77% | 58.16% | 1.58x | ✅ |
| `hexbytes_new[b'abc']` | 3.9484579435159186e-05 | 2.28183581188329e-05 | 42.21% | 73.04% | 1.73x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.212345422357687e-05 | 3.3270212691038486e-05 | 46.45% | 86.72% | 1.87x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.44079576735992e-05 | 3.7098941332137655e-05 | 42.40% | 73.61% | 1.74x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.44129008744914e-05 | 3.689798942856799e-05 | 42.72% | 74.57% | 1.75x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.331161731284813e-05 | 3.3240868828391915e-05 | 47.50% | 90.46% | 1.90x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.262685047922863e-05 | 3.4108326823588144e-05 | 45.54% | 83.61% | 1.84x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.227314480985637e-05 | 3.313759017719184e-05 | 46.79% | 87.92% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.141679801021778e-05 | 3.132661951262528e-05 | 48.99% | 96.05% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.362461190123321e-05 | 3.3079737156981886e-05 | 48.01% | 92.34% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.404850413991312e-05 | 3.333762406738516e-05 | 47.95% | 92.12% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.285383604566227e-05 | 3.3523160011780035e-05 | 46.66% | 87.49% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 7.858421880567953e-05 | 4.8552631302210295e-05 | 38.22% | 61.85% | 1.62x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.401719947674271e-05 | 3.323706545532141e-05 | 48.08% | 92.61% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.255721637066888e-05 | 3.32298044129522e-05 | 46.88% | 88.26% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.514790081518496e-05 | 3.446163261208015e-05 | 47.10% | 89.04% | 1.89x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.340124455644515e-05 | 3.321701327330781e-05 | 47.61% | 90.87% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.387615878113628e-05 | 3.3447839037695225e-05 | 47.64% | 90.97% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.448606244276718e-05 | 3.3833033592301175e-05 | 47.53% | 90.60% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 7.755796088295899e-05 | 4.5864875600967586e-05 | 40.86% | 69.10% | 1.69x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.39495043156379e-05 | 3.383897762847234e-05 | 47.08% | 88.98% | 1.89x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 7.555634442544302e-05 | 4.608346207132144e-05 | 39.01% | 63.96% | 1.64x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.250792316486992e-05 | 3.359751965542875e-05 | 46.25% | 86.05% | 1.86x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.220097936899074e-05 | 3.314544798004526e-05 | 46.71% | 87.66% | 1.88x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.21785385352088e-05 | 3.320810007287529e-05 | 46.59% | 87.24% | 1.87x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.225484063756615e-05 | 3.3328537145935685e-05 | 46.46% | 86.79% | 1.87x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.398718209605684e-05 | 3.326716427499664e-05 | 48.01% | 92.34% | 1.92x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.273017236549802e-05 | 3.383023184971854e-05 | 46.07% | 85.43% | 1.85x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.225579525278915e-05 | 3.3357206595082675e-05 | 46.42% | 86.63% | 1.87x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.234190883934939e-05 | 3.361598150521646e-05 | 46.08% | 85.45% | 1.85x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.268289467964045e-05 | 3.368362615512163e-05 | 46.26% | 86.09% | 1.86x | ✅ |
| `hexbytes_new[long alternating]` | 4.600818495419769e-05 | 2.9166044732018082e-05 | 36.61% | 57.75% | 1.58x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 7.671605072968144e-05 | 3.8076254830644555e-05 | 50.37% | 101.48% | 2.01x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 7.960603840223908e-05 | 4.1032846459176815e-05 | 48.46% | 94.01% | 1.94x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 7.978090278374096e-05 | 4.1129293747057696e-05 | 48.45% | 93.98% | 1.94x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 7.701687898071106e-05 | 3.822973590148374e-05 | 50.36% | 101.46% | 2.01x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 7.725279356379707e-05 | 3.8617707329879055e-05 | 50.01% | 100.05% | 2.00x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 7.661295803257675e-05 | 3.8082659624027815e-05 | 50.29% | 101.18% | 2.01x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 7.458205344075109e-05 | 3.57630990337073e-05 | 52.05% | 108.54% | 2.09x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 7.695236881779131e-05 | 3.868520545905761e-05 | 49.73% | 98.92% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 7.699459480631025e-05 | 3.8237371869871315e-05 | 50.34% | 101.36% | 2.01x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 7.677054614952223e-05 | 3.8639344042016996e-05 | 49.67% | 98.68% | 1.99x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 9.394598156604308e-05 | 5.2991068473293334e-05 | 43.59% | 77.29% | 1.77x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 7.664650946332356e-05 | 3.831199681960257e-05 | 50.01% | 100.06% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 7.659372917880344e-05 | 3.834059290893525e-05 | 49.94% | 99.77% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 7.650398104808421e-05 | 3.824878880115867e-05 | 50.00% | 100.02% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 7.650877363270021e-05 | 3.81934206803545e-05 | 50.08% | 100.32% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 7.671153126552974e-05 | 3.820159575392617e-05 | 50.20% | 100.81% | 2.01x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 7.743446334924828e-05 | 3.853233914122624e-05 | 50.24% | 100.96% | 2.01x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.089820461231168e-05 | 5.063035666612899e-05 | 44.30% | 79.53% | 1.80x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 7.711074821354845e-05 | 3.841120608789577e-05 | 50.19% | 100.75% | 2.01x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.124047200921444e-05 | 5.089667414018539e-05 | 44.22% | 79.27% | 1.79x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 7.681343456825166e-05 | 3.841364963575777e-05 | 49.99% | 99.96% | 2.00x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 7.65722377542382e-05 | 3.809846437788995e-05 | 50.25% | 100.99% | 2.01x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 7.679084781557683e-05 | 3.814418792205483e-05 | 50.33% | 101.32% | 2.01x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 7.658668618075339e-05 | 3.833888063583657e-05 | 49.94% | 99.76% | 2.00x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 7.652524515010104e-05 | 3.8116982816318156e-05 | 50.19% | 100.76% | 2.01x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 7.684145116760954e-05 | 3.85880618847445e-05 | 49.78% | 99.13% | 1.99x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 7.658414817848355e-05 | 3.8435661342505194e-05 | 49.81% | 99.25% | 1.99x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 7.660139962554826e-05 | 3.828532225328129e-05 | 50.02% | 100.08% | 2.00x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 7.660889536912519e-05 | 3.861824293934804e-05 | 49.59% | 98.37% | 1.98x | ✅ |
| `hexbytes_new[mixed pattern]` | 3.945692625938266e-05 | 2.295503095321388e-05 | 41.82% | 71.89% | 1.72x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 3.916830855956615e-05 | 2.2773604432421933e-05 | 41.86% | 71.99% | 1.72x | ✅ |
| `hexbytes_new[palindrome ascii]` | 3.915641659992542e-05 | 2.269434217233974e-05 | 42.04% | 72.54% | 1.73x | ✅ |
| `hexbytes_new[palindrome numeric]` | 3.927747131563928e-05 | 2.278185831390184e-05 | 42.00% | 72.41% | 1.72x | ✅ |
| `hexbytes_new[palindrome]` | 3.924904547050446e-05 | 2.274961970225404e-05 | 42.04% | 72.53% | 1.73x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.038156014050722e-05 | 2.2895035960307997e-05 | 43.30% | 76.38% | 1.76x | ✅ |
| `hexbytes_new[single 0xff]` | 3.909581348286145e-05 | 2.2434298005495564e-05 | 42.62% | 74.27% | 1.74x | ✅ |
| `hexbytes_new[single null byte]` | 3.9146806511736486e-05 | 2.24546704311908e-05 | 42.64% | 74.34% | 1.74x | ✅ |
| `hexbytes_new[two patterns]` | 3.942700115927027e-05 | 2.3241440099787952e-05 | 41.05% | 69.64% | 1.70x | ✅ |
| `hexbytes_repr[0-9]` | 3.125253501925469e-05 | 1.5259878824718033e-05 | 51.17% | 104.80% | 2.05x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00011487609378551178 | 3.862950171674284e-05 | 66.37% | 197.38% | 2.97x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00011504552172815063 | 3.8640390869029955e-05 | 66.41% | 197.73% | 2.98x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.0760745966746024e-05 | 1.902535405938872e-05 | 62.52% | 166.81% | 2.67x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.868192666478216e-05 | 1.9028579693016976e-05 | 60.91% | 155.84% | 2.56x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.200482237314922e-05 | 1.7229415805951825e-05 | 58.98% | 143.80% | 2.44x | ✅ |
| `hexbytes_repr[b'']` | 2.2383131890351605e-05 | 1.1292178976579474e-05 | 49.55% | 98.22% | 1.98x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.8659535308109916e-05 | 1.6230703063006405e-05 | 58.02% | 138.19% | 2.38x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.896761259616011e-05 | 1.3854056012742443e-05 | 52.17% | 109.09% | 2.09x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.099972967938224e-05 | 2.2044308300384833e-05 | 63.86% | 176.71% | 2.77x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0006884898888069345 | 0.00018914847797438312 | 72.53% | 263.99% | 3.64x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.8788835005810968e-05 | 1.3824198246201509e-05 | 51.98% | 108.25% | 2.08x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.962457104376443e-05 | 1.3957989998387414e-05 | 52.88% | 112.24% | 2.12x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.043138098695456e-05 | 1.452002900188116e-05 | 52.29% | 109.58% | 2.10x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.0330705458702816e-05 | 1.4269383611555351e-05 | 52.95% | 112.56% | 2.13x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.9205163598180005e-05 | 1.3897800962298769e-05 | 52.41% | 110.14% | 2.10x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.86780317794239e-05 | 1.9163197248864367e-05 | 60.63% | 154.02% | 2.54x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00036393473423579516 | 0.00010812289823525437 | 70.29% | 236.59% | 3.37x | ✅ |
| `hexbytes_repr[b'abc']` | 2.876705288557305e-05 | 1.3817264308131815e-05 | 51.97% | 108.20% | 2.08x | ✅ |
| `hexbytes_repr[long alternating]` | 0.0003647913941330984 | 0.00011087802068814224 | 69.61% | 229.00% | 3.29x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.365890122599302e-05 | 3.140712915844569e-05 | 66.47% | 198.21% | 2.98x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.1219483625717436e-05 | 1.4477591522937713e-05 | 53.63% | 115.64% | 2.16x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 2.999980162713633e-05 | 1.4177791094357373e-05 | 52.74% | 111.60% | 2.12x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.9183749454642506e-05 | 1.3996345215857395e-05 | 52.04% | 108.51% | 2.09x | ✅ |
| `hexbytes_repr[palindrome]` | 3.431516456303015e-05 | 1.539268147117991e-05 | 55.14% | 122.93% | 2.23x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.098331122809134e-05 | 2.2042672021093612e-05 | 63.85% | 176.66% | 2.77x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.8152954541652898e-05 | 1.355939890587493e-05 | 51.84% | 107.63% | 2.08x | ✅ |
| `hexbytes_repr[single null byte]` | 2.8109677121736504e-05 | 1.3536067085754843e-05 | 51.85% | 107.67% | 2.08x | ✅ |
| `hexbytes_repr[two patterns]` | 4.864111126639348e-05 | 1.9023399361859e-05 | 60.89% | 155.69% | 2.56x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.594112521751102e-05 | 1.3814652352591691e-05 | 13.34% | 15.39% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.05938571745021e-05 | 3.7483253929980924e-05 | 7.66% | 8.30% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.059249526272342e-05 | 3.74736427624329e-05 | 7.68% | 8.32% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.0741894687357532e-05 | 1.8318138762942214e-05 | 11.69% | 13.23% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.0730378476864672e-05 | 1.838576069793575e-05 | 11.31% | 12.75% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.9253546686177644e-05 | 1.657481273428457e-05 | 13.91% | 16.16% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 9.483592036881056e-06 | 1.069568207818106e-05 | -12.78% | -11.33% | 0.89x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.7857936915605993e-05 | 1.551263875038148e-05 | 13.13% | 15.12% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.5214614256030538e-05 | 1.3224973014868309e-05 | 13.08% | 15.04% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.391163703570659e-05 | 2.1217928478953546e-05 | 11.27% | 12.70% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00019618655595781927 | 0.00019277090221039159 | 1.74% | 1.77% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.5257442246039334e-05 | 1.315403307363877e-05 | 13.79% | 15.99% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.5371904048796723e-05 | 1.3324370617180208e-05 | 13.32% | 15.37% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.5727492936029686e-05 | 1.3596357103827538e-05 | 13.55% | 15.67% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.5710592204656905e-05 | 1.3579944506176854e-05 | 13.56% | 15.69% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.5240284511089147e-05 | 1.3217681187880863e-05 | 13.27% | 15.30% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.078979448457605e-05 | 1.8545651795345415e-05 | 10.79% | 12.10% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.0001088904377533156 | 0.00010765130262197704 | 1.14% | 1.15% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.527326314916311e-05 | 1.3280780279888663e-05 | 13.05% | 15.00% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00010630433640962283 | 0.0001080492923909766 | -1.64% | -1.61% | 0.98x | ❌ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.38447888269826e-05 | 3.0402281743541317e-05 | 10.17% | 11.32% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.593199006463532e-05 | 1.3843132497646704e-05 | 13.11% | 15.09% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.560850915463388e-05 | 1.3471623578291266e-05 | 13.69% | 15.86% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.5358626176358108e-05 | 1.329373610043091e-05 | 13.44% | 15.53% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.7099866792522222e-05 | 1.4566197600804838e-05 | 14.82% | 17.39% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.3914016467650938e-05 | 2.1194328132432793e-05 | 11.37% | 12.83% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.499545086324782e-05 | 1.290326780175041e-05 | 13.95% | 16.21% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.5005485371543133e-05 | 1.28936413273604e-05 | 14.07% | 16.38% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.0909933271448725e-05 | 1.8213722516110973e-05 | 12.89% | 14.80% | 1.15x | ✅ |
