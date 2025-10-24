#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/codspeed/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/codspeed/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.456730865881719e-05 | 2.404662645220258e-05 | 2.12% | 2.17% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.4656518762096264e-05 | 2.3932071945232036e-05 | 2.94% | 3.03% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.4852795719889616e-05 | 2.3793468340453795e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.4163909622267434e-05 | 2.391897521619216e-05 | 1.01% | 1.02% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.448335520085417e-05 | 2.386562750404089e-05 | 2.52% | 2.59% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.4515810818395713e-05 | 2.3550351257997494e-05 | 3.94% | 4.10% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.477412324786902e-05 | 2.421627447944245e-05 | 2.25% | 2.30% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.4771345942539135e-05 | 2.3805791643967237e-05 | 3.90% | 4.06% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.4731375142780563e-05 | 2.406823961521417e-05 | 2.68% | 2.76% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.4437150013210912e-05 | 2.3902607556836742e-05 | 2.19% | 2.24% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.4558844301186315e-05 | 2.377212201447232e-05 | 3.20% | 3.31% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4639030928197028e-05 | 2.416902514554808e-05 | 1.91% | 1.94% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.445881783813612e-05 | 2.3696611522865845e-05 | 3.12% | 3.22% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.4550772276431573e-05 | 2.4137294059511952e-05 | 1.68% | 1.71% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.4536654335904826e-05 | 2.401544008010258e-05 | 2.12% | 2.17% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.4790684717810223e-05 | 2.3962446464684608e-05 | 3.34% | 3.46% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.4710425943131025e-05 | 2.37686203348308e-05 | 3.81% | 3.96% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.466206636952225e-05 | 2.344459082912651e-05 | 4.94% | 5.19% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.43612049288277e-05 | 2.3880605180466532e-05 | 1.97% | 2.01% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.458590092479502e-05 | 2.3664191834273085e-05 | 3.75% | 3.89% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.4456658873250542e-05 | 2.3986309967504074e-05 | 1.92% | 1.96% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.444078160296707e-05 | 2.4056521710708256e-05 | 1.57% | 1.60% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.4659374542589596e-05 | 2.415133377165344e-05 | 2.06% | 2.10% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.460930486238864e-05 | 2.3746516171928197e-05 | 3.51% | 3.63% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.471870528935873e-05 | 2.3630984464668743e-05 | 4.40% | 4.60% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.4655697564231598e-05 | 2.3641077864040722e-05 | 4.12% | 4.29% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.3794317666950168e-05 | 2.269078430515781e-05 | 4.64% | 4.86% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.36606137119564e-05 | 2.2939173023237954e-05 | 3.05% | 3.15% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.3360682853824128e-05 | 2.2626809843012668e-05 | 3.14% | 3.24% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.343388481121246e-05 | 2.264597186855205e-05 | 3.36% | 3.48% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.3093551103559533e-05 | 2.2395998076375563e-05 | 3.02% | 3.11% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.342609285029279e-05 | 2.288788684401818e-05 | 2.30% | 2.35% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.378041480862801e-05 | 2.2873976170604466e-05 | 3.81% | 3.96% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.3460754069553794e-05 | 2.2826794099114974e-05 | 2.70% | 2.78% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.345980122963028e-05 | 2.2929386385927756e-05 | 2.26% | 2.31% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.359941604183445e-05 | 2.272147522441263e-05 | 3.72% | 3.86% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.311955810309781e-05 | 2.254105451436738e-05 | 2.50% | 2.57% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3401065096682007e-05 | 2.2564195846386254e-05 | 3.58% | 3.71% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.355120758250144e-05 | 2.2849870451064422e-05 | 2.98% | 3.07% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.3384246009710167e-05 | 2.2418979428079575e-05 | 4.13% | 4.31% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.36363830721225e-05 | 2.2741266644175237e-05 | 3.79% | 3.94% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.370217106760099e-05 | 2.2335443226407652e-05 | 5.77% | 6.12% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.3799767304175733e-05 | 2.257033408776652e-05 | 5.17% | 5.45% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.3843988819312925e-05 | 2.259278883796907e-05 | 5.25% | 5.54% | 1.06x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.3111875114450238e-05 | 2.3245188566476736e-05 | -0.58% | -0.57% | 0.99x | ❌ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.3250892552769855e-05 | 2.268634603781594e-05 | 2.43% | 2.49% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.3635094065689374e-05 | 2.2943244811164268e-05 | 2.93% | 3.02% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.3435871267851955e-05 | 2.2378393453564042e-05 | 4.51% | 4.73% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.3498955099696374e-05 | 2.2316640802288213e-05 | 5.03% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.3464409544206468e-05 | 2.2710979732557995e-05 | 3.21% | 3.32% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.3398274415938078e-05 | 2.3269261093284925e-05 | 0.55% | 0.55% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.3562555800418617e-05 | 2.2430585350979636e-05 | 4.80% | 5.05% | 1.05x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.3469432114259622e-05 | 2.2988344364272985e-05 | 2.05% | 2.09% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.3609691540014316e-05 | 2.2712280167123756e-05 | 3.80% | 3.95% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.355225317302472e-05 | 2.2455391606745184e-05 | 4.66% | 4.88% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.359074633322121e-05 | 2.279436172991051e-05 | 3.38% | 3.49% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.3604632274686688e-05 | 2.2496106307727296e-05 | 4.70% | 4.93% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.3465784743470096e-05 | 2.2524701974049625e-05 | 4.01% | 4.18% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.3545559385589914e-05 | 2.239620016512587e-05 | 4.88% | 5.13% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.3635015456936783e-05 | 2.2754381566365905e-05 | 3.73% | 3.87% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.3412697966074245e-05 | 2.607207244111189e-05 | -11.36% | -10.20% | 0.90x | ❌ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.3604576937150414e-05 | 2.2613710301682762e-05 | 4.20% | 4.38% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.361694821993562e-05 | 2.2771256174155744e-05 | 3.58% | 3.71% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.3594367672273244e-05 | 2.2681304494114773e-05 | 3.87% | 4.03% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.3508228914429522e-05 | 2.2495334667655907e-05 | 4.31% | 4.50% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3618498985248093e-05 | 2.2605450861096803e-05 | 4.29% | 4.48% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.3589408553534527e-05 | 2.2393926248990367e-05 | 5.07% | 5.34% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.3558299096180484e-05 | 2.240196555328007e-05 | 4.91% | 5.16% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.3553934210199166e-05 | 2.236910650439936e-05 | 5.03% | 5.30% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.344452479302856e-05 | 2.2797834007417295e-05 | 2.76% | 2.84% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.3333760505833704e-05 | 2.2550945210737885e-05 | 3.35% | 3.47% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.3453190937777217e-05 | 2.2703229679602156e-05 | 3.20% | 3.30% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.366316318808283e-05 | 2.250451169328628e-05 | 4.90% | 5.15% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.3433977054609034e-05 | 2.265869479126879e-05 | 3.31% | 3.42% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.3547902525849747e-05 | 2.2424657009398825e-05 | 4.77% | 5.01% | 1.05x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.3734975677546005e-05 | 2.2363256945712756e-05 | 5.78% | 6.13% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.360193244002525e-05 | 2.277955127627879e-05 | 3.48% | 3.61% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.353776569679221e-05 | 2.272641821290307e-05 | 3.45% | 3.57% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.3680115492937378e-05 | 2.2376320324674494e-05 | 5.51% | 5.83% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.367762782294541e-05 | 2.26230102606185e-05 | 4.45% | 4.66% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.379170195043732e-05 | 2.2842468722189062e-05 | 3.99% | 4.16% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.359279308477837e-05 | 2.2724424817549924e-05 | 3.68% | 3.82% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.355377470863327e-05 | 2.261652613766383e-05 | 3.98% | 4.14% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.3615246615612687e-05 | 2.2813774342861702e-05 | 3.39% | 3.51% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.3534433316307808e-05 | 2.2895074212443797e-05 | 2.72% | 2.79% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.3548319203317396e-05 | 2.2637519739773663e-05 | 3.87% | 4.02% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.3569418942152285e-05 | 2.3244325084017464e-05 | 1.38% | 1.40% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.3738809290714252e-05 | 2.27096960744506e-05 | 4.34% | 4.53% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.3727558687908323e-05 | 2.2932050379496178e-05 | 3.35% | 3.47% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.3539039104624398e-05 | 2.264440762418907e-05 | 3.80% | 3.95% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.3596806301556764e-05 | 2.23165471783662e-05 | 5.43% | 5.74% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.361722267410302e-05 | 2.2872003314525436e-05 | 3.16% | 3.26% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.349756058114766e-05 | 2.231113414031565e-05 | 5.05% | 5.32% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.357320049219651e-05 | 2.2820321041702247e-05 | 3.19% | 3.30% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.387015298911685e-05 | 2.2544116622964276e-05 | 5.56% | 5.88% | 1.06x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.3538613651487007e-05 | 2.3053254110162428e-05 | 2.06% | 2.11% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.3965356927652414e-05 | 2.5802072152678446e-05 | -7.66% | -7.12% | 0.93x | ❌ |
| `hexbytes_getitem_index[2-b'abc']` | 2.3640309292654036e-05 | 2.2614557658634505e-05 | 4.34% | 4.54% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.355172313002068e-05 | 2.3009059301022286e-05 | 2.30% | 2.36% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.358421376110289e-05 | 2.2703093192167537e-05 | 3.74% | 3.88% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.3589818348533968e-05 | 2.2683019418869463e-05 | 3.84% | 4.00% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.360647627459514e-05 | 2.280767508329647e-05 | 3.38% | 3.50% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.366257266492669e-05 | 2.2843718598441356e-05 | 3.46% | 3.58% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.349997119565727e-05 | 2.231513018490806e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.3487637129749025e-05 | 2.3002451356329886e-05 | 2.07% | 2.11% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.3791657617723876e-05 | 2.2789674246912234e-05 | 4.21% | 4.40% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.3718246013024204e-05 | 2.2707418482952682e-05 | 4.26% | 4.45% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.371977607924252e-05 | 2.240825801588249e-05 | 5.53% | 5.85% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.3571604783759777e-05 | 2.2758221922379705e-05 | 3.45% | 3.57% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.356035560615874e-05 | 2.282479868493655e-05 | 3.12% | 3.22% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.3677090679510827e-05 | 2.2993484464689257e-05 | 2.89% | 2.97% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.3666881647738922e-05 | 2.2375426842632825e-05 | 5.46% | 5.77% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.3545271551011965e-05 | 2.311066505375945e-05 | 1.85% | 1.88% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.368511357675048e-05 | 2.256780797010318e-05 | 4.72% | 4.95% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.305425935999146e-05 | 2.248623687161487e-05 | 2.46% | 2.53% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.3580991962251236e-05 | 2.267913634388871e-05 | 3.82% | 3.98% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3526078813947066e-05 | 2.2519275022573016e-05 | 4.28% | 4.47% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.3900212161422902e-05 | 2.2703383307825336e-05 | 5.01% | 5.27% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.381623442946504e-05 | 2.2523299135952497e-05 | 5.43% | 5.74% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.353012447298402e-05 | 2.2989688428850333e-05 | 2.30% | 2.35% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.3541179718633733e-05 | 2.246839863411629e-05 | 4.56% | 4.77% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.3566532918947027e-05 | 2.2814501695548656e-05 | 3.19% | 3.30% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.3673585952858894e-05 | 2.2431903055096765e-05 | 5.25% | 5.54% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.3520804796443912e-05 | 2.278468573095843e-05 | 3.13% | 3.23% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.3692226712147153e-05 | 2.2546435913274177e-05 | 4.84% | 5.08% | 1.05x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.3660729721319314e-05 | 2.2881218190395676e-05 | 3.29% | 3.41% | 1.03x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.368887227294273e-05 | 2.242668110855374e-05 | 5.33% | 5.63% | 1.06x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.3671560557999155e-05 | 2.2799560269953722e-05 | 3.68% | 3.82% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.3520972040304813e-05 | 2.2585714435018827e-05 | 3.98% | 4.14% | 1.04x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.353354867843519e-05 | 2.2375023405544723e-05 | 4.92% | 5.18% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.3328947270445628e-05 | 2.2529993403638223e-05 | 3.42% | 3.55% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.3562134980240505e-05 | 2.301403818244458e-05 | 2.33% | 2.38% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.3339626290794024e-05 | 2.2534866434710573e-05 | 3.45% | 3.57% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.3317716985009474e-05 | 2.29865228223134e-05 | 1.42% | 1.44% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.3164609316500406e-05 | 2.3008228266138512e-05 | 0.68% | 0.68% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.3520077310432363e-05 | 2.270278550543186e-05 | 3.47% | 3.60% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.362654759091957e-05 | 2.3283905211592184e-05 | 1.45% | 1.47% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.3575514243905227e-05 | 2.3109699338884032e-05 | 1.98% | 2.02% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.35136690750008e-05 | 2.2429471396014554e-05 | 4.61% | 4.83% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.3721500652722257e-05 | 2.2913141161058725e-05 | 3.41% | 3.53% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.3421481836713424e-05 | 2.247174273813694e-05 | 4.05% | 4.23% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.3627114959007584e-05 | 2.2508068716370242e-05 | 4.74% | 4.97% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.3432523520733883e-05 | 2.2467938978523455e-05 | 4.12% | 4.29% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.348355582738424e-05 | 2.2833769736164293e-05 | 2.77% | 2.85% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.355846288761702e-05 | 2.304871177460006e-05 | 2.16% | 2.21% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.346384508270224e-05 | 2.2736447006824192e-05 | 3.10% | 3.20% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.3371936514855984e-05 | 2.2636352697894783e-05 | 3.15% | 3.25% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.329242188023277e-05 | 2.301688552475468e-05 | 1.18% | 1.20% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.3482993263915195e-05 | 2.2543204042726906e-05 | 4.00% | 4.17% | 1.04x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.3418528148240774e-05 | 2.2942533880632708e-05 | 2.03% | 2.07% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.3539510507867326e-05 | 2.2351943047755375e-05 | 5.04% | 5.31% | 1.05x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.3588903904311818e-05 | 2.3066634285044805e-05 | 2.21% | 2.26% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.3520752153233473e-05 | 2.2285341812303526e-05 | 5.25% | 5.54% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.3560543638701647e-05 | 2.239483982531596e-05 | 4.95% | 5.21% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.3434629006573057e-05 | 2.2316768834948767e-05 | 4.77% | 5.01% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.3509397519724564e-05 | 2.2821762574985353e-05 | 2.92% | 3.01% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.3582758878834642e-05 | 2.274174344212737e-05 | 3.57% | 3.70% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.3337904048774817e-05 | 2.2417769133925713e-05 | 3.94% | 4.10% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.345295819608121e-05 | 2.311791456118532e-05 | 1.43% | 1.45% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.336008913559136e-05 | 2.2405493732218243e-05 | 4.09% | 4.26% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.3557305714789284e-05 | 2.2343094266514248e-05 | 5.15% | 5.43% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.3545521110505115e-05 | 2.250246970115263e-05 | 4.43% | 4.64% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.3468583085065186e-05 | 2.2528183622023943e-05 | 4.01% | 4.17% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.3600966735245645e-05 | 2.2497869805894795e-05 | 4.67% | 4.90% | 1.05x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.3436841352495584e-05 | 2.274897624945022e-05 | 2.93% | 3.02% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.3515716597363755e-05 | 2.263421029366131e-05 | 3.75% | 3.89% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.3594015791225405e-05 | 2.3028994285360087e-05 | 2.39% | 2.45% | 1.02x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.3549580946400443e-05 | 2.2290092060241058e-05 | 5.35% | 5.65% | 1.06x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.3646125959934005e-05 | 2.2748190163085856e-05 | 3.80% | 3.95% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.3605892330900473e-05 | 2.286488619169011e-05 | 3.14% | 3.24% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.3615291806300972e-05 | 2.266366742897454e-05 | 4.03% | 4.20% | 1.04x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.354089879484137e-05 | 2.256199649927497e-05 | 4.16% | 4.34% | 1.04x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.134303134697147e-05 | 5.922833444778e-05 | 27.19% | 37.34% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.076740253331466e-05 | 5.9605904930729224e-05 | 26.20% | 35.50% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.185781343221179e-05 | 5.971311678144852e-05 | 27.05% | 37.09% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.177916149121201e-05 | 6.063637199342035e-05 | 25.85% | 34.87% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.204332564184567e-05 | 6.001191062589682e-05 | 26.85% | 36.71% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.115002266427978e-05 | 5.976758475803986e-05 | 26.35% | 35.78% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 8.008416350695852e-05 | 5.660079771586638e-05 | 29.32% | 41.49% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.238968725046583e-05 | 5.9778237637150364e-05 | 27.44% | 37.83% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.154727570863891e-05 | 5.9141205008273787e-05 | 27.48% | 37.89% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.237449658852424e-05 | 5.944826051895951e-05 | 27.83% | 38.57% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.156021976424737e-05 | 5.9857551318325634e-05 | 26.61% | 36.26% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.245973737892682e-05 | 5.9332646328944155e-05 | 28.05% | 38.98% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.211809005316931e-05 | 5.867719747301107e-05 | 28.55% | 39.95% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.234130212719418e-05 | 5.892512644348236e-05 | 28.44% | 39.74% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.228084165690998e-05 | 5.980331196732676e-05 | 27.32% | 37.59% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.343434103725592e-05 | 5.892029578489128e-05 | 29.38% | 41.61% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.257478630192295e-05 | 5.95803036960022e-05 | 27.85% | 38.59% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.227758197487012e-05 | 5.913119146856786e-05 | 28.13% | 39.14% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.341339817859411e-05 | 6.0429551125142e-05 | 27.55% | 38.03% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.204929757439662e-05 | 5.9319301890106906e-05 | 27.70% | 38.32% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.131865897492314e-05 | 5.913513826642187e-05 | 27.28% | 37.51% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.126912194085699e-05 | 5.993768240256771e-05 | 26.25% | 35.59% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.166979608848016e-05 | 5.9613616423304544e-05 | 27.01% | 37.00% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.141895508696486e-05 | 5.9464338813114e-05 | 26.96% | 36.92% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.250341557660517e-05 | 5.960272902265854e-05 | 27.76% | 38.42% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.200938866405554e-05 | 5.9346561366169746e-05 | 27.63% | 38.19% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 8.081371895008757e-05 | 5.7215816984043887e-05 | 29.20% | 41.24% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 8.011834020440143e-05 | 5.72347057188044e-05 | 28.56% | 39.98% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.189348483309271e-05 | 5.948051638357261e-05 | 27.37% | 37.68% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.279417541871884e-05 | 6.081620030247478e-05 | 26.55% | 36.14% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.275886698149802e-05 | 6.219062296065332e-05 | 24.85% | 33.07% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.310631697946607e-05 | 6.0917540208948375e-05 | 26.70% | 36.42% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.25150614001849e-05 | 6.052812472948163e-05 | 26.65% | 36.33% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.37799825163417e-05 | 6.047437235130707e-05 | 27.82% | 38.54% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.250554187943227e-05 | 6.084717742939855e-05 | 26.25% | 35.59% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 8.085536398630622e-05 | 5.796068605045464e-05 | 28.32% | 39.50% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.1995263777957e-05 | 6.063985069433898e-05 | 26.04% | 35.22% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.229588073703522e-05 | 6.072064331877395e-05 | 26.22% | 35.53% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.255885621795139e-05 | 6.0543796791975654e-05 | 26.67% | 36.36% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.230282368931405e-05 | 6.080152783627862e-05 | 26.12% | 35.36% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.533135506187081e-05 | 6.091685167718803e-05 | 28.61% | 40.08% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.232282193479452e-05 | 6.050358390125032e-05 | 26.50% | 36.06% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.292772824781687e-05 | 6.015949804373945e-05 | 27.46% | 37.85% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.237245573692498e-05 | 6.0440277798604653e-05 | 26.63% | 36.29% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.215769049597655e-05 | 6.0635658241741256e-05 | 26.20% | 35.49% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.207892303701185e-05 | 6.0427270968552856e-05 | 26.38% | 35.83% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.245662864653465e-05 | 6.078291550615974e-05 | 26.28% | 35.66% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.278039436888242e-05 | 6.037659789000747e-05 | 27.06% | 37.11% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.284014800916013e-05 | 6.081463824205222e-05 | 26.59% | 36.22% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.309897765947162e-05 | 6.0849005261999556e-05 | 26.78% | 36.57% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.313585609296835e-05 | 6.066894663274695e-05 | 27.02% | 37.03% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.315156045827524e-05 | 6.075977119768459e-05 | 26.93% | 36.85% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.281608338256408e-05 | 6.0188140491295234e-05 | 27.32% | 37.60% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.267812901898768e-05 | 6.100444315219738e-05 | 26.21% | 35.53% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.337782695989844e-05 | 6.081495425717134e-05 | 27.06% | 37.10% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.17791326495214e-05 | 5.8299061015689116e-05 | 28.71% | 40.28% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 8.220497919654202e-05 | 5.832862476669405e-05 | 29.04% | 40.93% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.283765824961487e-05 | 6.039291635875838e-05 | 27.09% | 37.16% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.222467500219124e-05 | 6.066185084236241e-05 | 26.22% | 35.55% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.273434234037527e-05 | 6.1032230544228505e-05 | 26.23% | 35.56% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.234142912190486e-05 | 6.064742639533756e-05 | 26.35% | 35.77% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.331349918889033e-05 | 5.986338910102581e-05 | 28.15% | 39.17% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.312458108827237e-05 | 6.03893295143619e-05 | 27.35% | 37.65% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.265388097027001e-05 | 5.9448059226890743e-05 | 28.08% | 39.04% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 8.072390322862267e-05 | 5.798406338923408e-05 | 28.17% | 39.22% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.25419452396746e-05 | 6.041106182580113e-05 | 26.81% | 36.63% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.303960132519774e-05 | 6.115661235083651e-05 | 26.35% | 35.78% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.322723894604838e-05 | 6.075821527734119e-05 | 27.00% | 36.98% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.423259631732189e-05 | 6.046867320448483e-05 | 28.21% | 39.30% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.266907274089254e-05 | 6.070427482436697e-05 | 26.57% | 36.18% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.296490930833336e-05 | 6.055440008713235e-05 | 27.01% | 37.01% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.292277171739523e-05 | 6.0899594603082904e-05 | 26.56% | 36.16% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.267749714567454e-05 | 6.075712268312998e-05 | 26.51% | 36.08% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.3266283808782e-05 | 6.174696223739572e-05 | 25.84% | 34.85% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.414189524892833e-05 | 6.689608720863044e-05 | 20.50% | 25.78% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.241143694561873e-05 | 6.035605135592371e-05 | 26.76% | 36.54% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.333432533976016e-05 | 6.006188670315787e-05 | 27.93% | 38.75% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.260993965371234e-05 | 6.064853868628184e-05 | 26.58% | 36.21% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.258062658615006e-05 | 6.049992879278792e-05 | 26.74% | 36.50% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.412759769133107e-05 | 6.139129509395605e-05 | 27.03% | 37.04% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.25777825934863e-05 | 6.054897956636693e-05 | 26.68% | 36.38% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.217764357124765e-05 | 6.003692140490262e-05 | 26.94% | 36.88% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.318026577887306e-05 | 6.0631930769729326e-05 | 27.11% | 37.19% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.244064691668792e-05 | 5.975705081472225e-05 | 27.52% | 37.96% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 8.060718610266714e-05 | 5.7868234731224525e-05 | 28.21% | 39.29% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.058672725063153e-05 | 5.754199667127969e-05 | 28.60% | 40.05% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.208461528056816e-05 | 5.996615244323316e-05 | 26.95% | 36.88% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.068744520625463e-05 | 5.868933989703181e-05 | 27.26% | 37.48% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.29176314853901e-05 | 5.918817864332351e-05 | 28.62% | 40.09% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.221967848177816e-05 | 5.925173428979981e-05 | 27.93% | 38.76% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.226465485757733e-05 | 5.987978577944261e-05 | 27.21% | 37.38% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.238477928772085e-05 | 5.8821043596787027e-05 | 28.60% | 40.06% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.122730292897257e-05 | 5.953672752553781e-05 | 26.70% | 36.43% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.879422247326497e-05 | 5.68608714668476e-05 | 27.84% | 38.57% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.162896957524163e-05 | 5.923609217580473e-05 | 27.43% | 37.80% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.120066093835428e-05 | 5.9173205301396764e-05 | 27.13% | 37.23% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.25256917485185e-05 | 5.9706842802571636e-05 | 27.65% | 38.22% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010217842556353436 | 7.544361969702003e-05 | 26.16% | 35.44% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.897806747608092e-05 | 5.6625249115259665e-05 | 28.30% | 39.48% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.096324357642427e-05 | 5.9187497933688166e-05 | 26.90% | 36.79% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.101585444966353e-05 | 5.89915876720256e-05 | 27.19% | 37.33% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.098884996653748e-05 | 5.8931902479483894e-05 | 27.23% | 37.43% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.122220511547349e-05 | 5.905064573139775e-05 | 27.30% | 37.55% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.273201547428523e-05 | 6.025914326625667e-05 | 27.16% | 37.29% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.38812313042771e-05 | 7.444687035654238e-05 | 20.70% | 26.11% | 1.26x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 8.026454688640327e-05 | 5.819093014509372e-05 | 27.50% | 37.93% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.754137289730976e-05 | 7.00524314310446e-05 | 28.18% | 39.24% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.25949195385227e-05 | 5.996816180664337e-05 | 27.39% | 37.73% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.179889909009157e-05 | 5.920095694913355e-05 | 27.63% | 38.17% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.165177139042367e-05 | 5.899998198642157e-05 | 27.74% | 38.39% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.158538692170815e-05 | 5.9016583318090505e-05 | 27.66% | 38.24% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.174164859600987e-05 | 5.938692463677803e-05 | 27.35% | 37.64% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.281538715677776e-05 | 6.011660565003047e-05 | 27.41% | 37.76% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.905990409751741e-05 | 5.679591441885608e-05 | 28.16% | 39.20% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.874907408330163e-05 | 5.697284096451486e-05 | 27.65% | 38.22% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.297530568212134e-05 | 5.994349400110715e-05 | 27.76% | 38.42% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 8.056723743190595e-05 | 5.800006817974179e-05 | 28.01% | 38.91% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.140004631999682e-05 | 5.889097210435843e-05 | 27.65% | 38.22% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.182850057689774e-05 | 5.8839255685886306e-05 | 28.09% | 39.07% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.04561490687312e-05 | 5.7831503534390286e-05 | 28.12% | 39.12% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.07533404487784e-05 | 5.8177614587953767e-05 | 27.96% | 38.80% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 8.078597582241725e-05 | 5.759732572353142e-05 | 28.70% | 40.26% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.78575500199469e-05 | 5.548236099940507e-05 | 28.74% | 40.33% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 8.071409548966237e-05 | 5.805000089973306e-05 | 28.08% | 39.04% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 8.063848630198331e-05 | 5.8100705500977967e-05 | 27.95% | 38.79% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.067304261978077e-05 | 5.875826765753068e-05 | 27.16% | 37.30% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010034420575222063 | 7.931996239326547e-05 | 20.95% | 26.51% | 1.27x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.075585314487581e-05 | 5.800965904859272e-05 | 28.17% | 39.21% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.044605417248721e-05 | 5.791449568017938e-05 | 28.01% | 38.90% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 8.035645239462219e-05 | 5.736959464075064e-05 | 28.61% | 40.07% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 8.096398118695832e-05 | 5.8130174340909826e-05 | 28.20% | 39.28% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 8.047214031966791e-05 | 5.7879464569634064e-05 | 28.08% | 39.03% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 8.119629213546525e-05 | 5.829961230849371e-05 | 28.20% | 39.27% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.516711086265738e-05 | 6.992975615864214e-05 | 26.52% | 36.09% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.097706327131769e-05 | 5.818076302047954e-05 | 28.15% | 39.18% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.273679134619517e-05 | 7.416269499833755e-05 | 20.03% | 25.05% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.204083651166234e-05 | 5.885460484760045e-05 | 28.26% | 39.40% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 8.162560438044895e-05 | 5.810589193817755e-05 | 28.81% | 40.48% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 8.045853891994549e-05 | 5.8055703801137784e-05 | 27.84% | 38.59% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 8.035297868933252e-05 | 5.840342817061233e-05 | 27.32% | 37.58% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.208857189886911e-05 | 5.859718226803624e-05 | 28.62% | 40.09% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.115823915626434e-05 | 5.801127752261231e-05 | 28.52% | 39.90% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 8.017900926478152e-05 | 5.5576113405198024e-05 | 30.68% | 44.27% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.860342353867819e-05 | 5.570520072823332e-05 | 29.13% | 41.11% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.033244549639611e-05 | 5.793482721890366e-05 | 27.88% | 38.66% | 1.39x | ✅ |
| `hexbytes_new['']` | 7.04994776423929e-05 | 3.691888618005064e-05 | 47.63% | 90.96% | 1.91x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.181783570168882e-05 | 5.279232630795562e-05 | 42.50% | 73.92% | 1.74x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.000373677713817e-05 | 5.2328532440097225e-05 | 41.86% | 72.00% | 1.72x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.69838240898698e-05 | 4.9379520699600356e-05 | 43.23% | 76.15% | 1.76x | ✅ |
| `hexbytes_new['0x']` | 7.772942924410948e-05 | 3.8461564318424994e-05 | 50.52% | 102.10% | 2.02x | ✅ |
| `hexbytes_new['0x1234']` | 8.367999687384856e-05 | 4.7735012513049695e-05 | 42.96% | 75.30% | 1.75x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.409766883772891e-05 | 4.6598976924973456e-05 | 44.59% | 80.47% | 1.80x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.485608952719267e-05 | 4.712518932459726e-05 | 44.46% | 80.07% | 1.80x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.482086189286017e-05 | 4.6260332346385785e-05 | 45.46% | 83.36% | 1.83x | ✅ |
| `hexbytes_new['abc']` | 8.599837246336973e-05 | 4.7570244578385614e-05 | 44.68% | 80.78% | 1.81x | ✅ |
| `hexbytes_new['deadbeef']` | 7.636807509755591e-05 | 4.4636689886215074e-05 | 41.55% | 71.09% | 1.71x | ✅ |
| `hexbytes_new[0-9]` | 4.403808200014096e-05 | 2.5996944769633857e-05 | 40.97% | 69.40% | 1.69x | ✅ |
| `hexbytes_new[0]` | 0.0001207264602014738 | 6.257360580705034e-05 | 48.17% | 92.94% | 1.93x | ✅ |
| `hexbytes_new[123456]` | 0.0001266058905251781 | 6.827697053557204e-05 | 46.07% | 85.43% | 1.85x | ✅ |
| `hexbytes_new[2**16]` | 0.00012669736163942416 | 6.799850572766414e-05 | 46.33% | 86.32% | 1.86x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013135503630708984 | 7.664307355283809e-05 | 41.65% | 71.39% | 1.71x | ✅ |
| `hexbytes_new[2**32]` | 0.00012863462134673863 | 7.201053066000563e-05 | 44.02% | 78.63% | 1.79x | ✅ |
| `hexbytes_new[2**64]` | 0.00013026902223681959 | 7.479440419082078e-05 | 42.58% | 74.17% | 1.74x | ✅ |
| `hexbytes_new[2**8]` | 0.00012408805988417751 | 6.557043885962479e-05 | 47.16% | 89.24% | 1.89x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.301228611353373e-05 | 2.6644191312622307e-05 | 38.05% | 61.43% | 1.61x | ✅ |
| `hexbytes_new[False]` | 6.14165706958177e-05 | 2.7002970777779107e-05 | 56.03% | 127.44% | 2.27x | ✅ |
| `hexbytes_new[True]` | 6.140641697707859e-05 | 2.7013353254672344e-05 | 56.01% | 127.32% | 2.27x | ✅ |
| `hexbytes_new[all byte values]` | 4.320202622260415e-05 | 2.6667610195997125e-05 | 38.27% | 62.00% | 1.62x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.299770084905665e-05 | 2.6727577916984413e-05 | 37.84% | 60.87% | 1.61x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.3551259022666024e-05 | 2.6488541600041e-05 | 39.18% | 64.42% | 1.64x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.268443149577568e-05 | 2.57922790645061e-05 | 39.57% | 65.49% | 1.65x | ✅ |
| `hexbytes_new[b'']` | 4.376082100546708e-05 | 2.57210402043128e-05 | 41.22% | 70.14% | 1.70x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.4046527690436206e-05 | 2.6046789166785764e-05 | 40.87% | 69.11% | 1.69x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.2911209674625694e-05 | 2.5888236621157462e-05 | 39.67% | 65.76% | 1.66x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.320449639212798e-05 | 2.6164195040292052e-05 | 39.44% | 65.13% | 1.65x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.5516199077858326e-05 | 3.931876683711919e-05 | 29.18% | 41.20% | 1.41x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.332661806828627e-05 | 2.5971049358447863e-05 | 40.06% | 66.83% | 1.67x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.28024940599748e-05 | 2.584174701441804e-05 | 39.63% | 65.63% | 1.66x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.283237228433249e-05 | 2.5883894530558302e-05 | 39.57% | 65.48% | 1.65x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.342192707800947e-05 | 2.5879509168626773e-05 | 40.40% | 67.78% | 1.68x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.382219895388091e-05 | 2.5956344696642157e-05 | 40.77% | 68.83% | 1.69x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.3666651708280676e-05 | 2.6689197570697962e-05 | 38.88% | 63.61% | 1.64x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.1140376198280333e-05 | 3.2972240810030515e-05 | 35.53% | 55.10% | 1.55x | ✅ |
| `hexbytes_new[b'abc']` | 4.344105569248774e-05 | 2.598267880498919e-05 | 40.19% | 67.19% | 1.67x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.965714437388664e-05 | 3.7852105003405184e-05 | 45.66% | 84.02% | 1.84x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.919807959315559e-05 | 3.76963961622973e-05 | 45.52% | 83.57% | 1.84x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 7.010431516835216e-05 | 3.786357215920646e-05 | 45.99% | 85.15% | 1.85x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.961205285307593e-05 | 3.738736730469695e-05 | 46.29% | 86.19% | 1.86x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.949980744786934e-05 | 3.76946883773541e-05 | 45.76% | 84.38% | 1.84x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 7.221742236722652e-05 | 3.850489467251269e-05 | 46.68% | 87.55% | 1.88x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.727593812548964e-05 | 3.6057474349869365e-05 | 46.40% | 86.58% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.98352002140466e-05 | 3.8209212995914844e-05 | 45.29% | 82.77% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 7.01505962552076e-05 | 3.80777261197213e-05 | 45.72% | 84.23% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 7.205591372261813e-05 | 3.78458600824189e-05 | 47.48% | 90.39% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 8.921731408567883e-05 | 5.4154569923490613e-05 | 39.30% | 64.75% | 1.65x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.937517081961754e-05 | 3.8037225382724584e-05 | 45.17% | 82.39% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.93255044215687e-05 | 3.770140176351788e-05 | 45.62% | 83.88% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 7.00406843474042e-05 | 3.7487632196332274e-05 | 46.48% | 86.84% | 1.87x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.931591699933486e-05 | 3.7723415920190004e-05 | 45.58% | 83.75% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 7.035082158090117e-05 | 3.8239909187524296e-05 | 45.64% | 83.97% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.935789366556954e-05 | 3.755436140171754e-05 | 45.85% | 84.69% | 1.85x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.441399614700847e-05 | 4.863157884729152e-05 | 42.39% | 73.58% | 1.74x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.878707960157257e-05 | 3.828325684835893e-05 | 44.35% | 79.68% | 1.80x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.342295081680752e-05 | 4.820787844560969e-05 | 42.21% | 73.05% | 1.73x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.960801628836405e-05 | 3.787918674628493e-05 | 45.58% | 83.76% | 1.84x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.917908429847294e-05 | 3.7334648136748554e-05 | 46.03% | 85.29% | 1.85x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 7.035981842160819e-05 | 3.7560544020913394e-05 | 46.62% | 87.32% | 1.87x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.98840448351228e-05 | 3.76442141864318e-05 | 46.13% | 85.64% | 1.86x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 7.051874920073572e-05 | 3.823774693504946e-05 | 45.78% | 84.42% | 1.84x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 7.004589654913301e-05 | 3.798449599487203e-05 | 45.77% | 84.41% | 1.84x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.951873383368264e-05 | 3.792645330912404e-05 | 45.44% | 83.30% | 1.83x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.96230131319446e-05 | 3.7844294923466595e-05 | 45.64% | 83.97% | 1.84x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 7.021138159218901e-05 | 3.715475472387102e-05 | 47.08% | 88.97% | 1.89x | ✅ |
| `hexbytes_new[long alternating]` | 5.03570935062794e-05 | 3.306299025980707e-05 | 34.34% | 52.31% | 1.52x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.430640052001413e-05 | 4.2911706248964946e-05 | 49.10% | 96.46% | 1.96x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.467670843953395e-05 | 4.318914515630725e-05 | 49.00% | 96.06% | 1.96x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.495240906272953e-05 | 4.337180061887673e-05 | 48.95% | 95.87% | 1.96x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.433721484694026e-05 | 4.245280553944705e-05 | 49.66% | 98.66% | 1.99x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.77536849463542e-05 | 4.268473513442282e-05 | 51.36% | 105.59% | 2.06x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.747042306966594e-05 | 4.2780042520570846e-05 | 51.09% | 104.47% | 2.04x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.074320635018008e-05 | 4.070103714092553e-05 | 49.59% | 98.38% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.556282590016062e-05 | 4.476699491109469e-05 | 47.68% | 91.13% | 1.91x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.384447570784241e-05 | 4.289352080486033e-05 | 48.84% | 95.47% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.564731275872154e-05 | 4.330898153567681e-05 | 49.43% | 97.76% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010367982175790387 | 6.0689803958304085e-05 | 41.46% | 70.84% | 1.71x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.311987023021198e-05 | 4.235384554537931e-05 | 49.04% | 96.25% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.410190875536032e-05 | 4.2658287578790754e-05 | 49.28% | 97.15% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.49112981657203e-05 | 4.289911040779466e-05 | 49.48% | 97.93% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.488437707933786e-05 | 4.308572076861385e-05 | 49.24% | 97.01% | 1.97x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.309750381856755e-05 | 4.2728999492130975e-05 | 48.58% | 94.48% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.314625758348066e-05 | 4.2366505284328424e-05 | 49.05% | 96.25% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.764249423625801e-05 | 5.411450714538094e-05 | 44.58% | 80.44% | 1.80x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.396315222942187e-05 | 4.2518242407686136e-05 | 49.36% | 97.48% | 1.97x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 9.85488345272107e-05 | 5.695682355381868e-05 | 42.20% | 73.02% | 1.73x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.401720853659994e-05 | 4.369844961388691e-05 | 47.99% | 92.27% | 1.92x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.589486672496568e-05 | 4.2938804993418266e-05 | 50.01% | 100.04% | 2.00x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.112526216483655e-05 | 4.2598799181848216e-05 | 47.49% | 90.44% | 1.90x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.14653144892466e-05 | 4.261603665913924e-05 | 47.69% | 91.16% | 1.91x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.468341010797062e-05 | 4.2434747944601294e-05 | 49.89% | 99.56% | 2.00x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.633391775212632e-05 | 4.41697631442916e-05 | 48.84% | 95.46% | 1.95x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.373142621250245e-05 | 4.320126003488468e-05 | 48.40% | 93.82% | 1.94x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.464011498686906e-05 | 4.335939928028297e-05 | 48.77% | 95.21% | 1.95x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.26594620042583e-05 | 4.268974794839916e-05 | 48.35% | 93.63% | 1.94x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.287293337614097e-05 | 2.8648569850958478e-05 | 33.18% | 49.65% | 1.50x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.296227441672871e-05 | 2.5894568443224532e-05 | 39.73% | 65.91% | 1.66x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.43249853409838e-05 | 2.5983244792551113e-05 | 41.38% | 70.59% | 1.71x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.3882890864879774e-05 | 2.577824352173031e-05 | 41.26% | 70.23% | 1.70x | ✅ |
| `hexbytes_new[palindrome]` | 4.3407239446300644e-05 | 2.592332710914111e-05 | 40.28% | 67.44% | 1.67x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.294839544848125e-05 | 2.6394639811166204e-05 | 38.54% | 62.72% | 1.63x | ✅ |
| `hexbytes_new[single 0xff]` | 4.2458267905282356e-05 | 2.5691301467576775e-05 | 39.49% | 65.26% | 1.65x | ✅ |
| `hexbytes_new[single null byte]` | 4.244501220860338e-05 | 2.5461008035816095e-05 | 40.01% | 66.71% | 1.67x | ✅ |
| `hexbytes_new[two patterns]` | 4.244067671291957e-05 | 2.64305602250722e-05 | 37.72% | 60.57% | 1.61x | ✅ |
| `hexbytes_repr[0-9]` | 2.8765446462187505e-05 | 1.4551222432524331e-05 | 49.41% | 97.68% | 1.98x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00011932241437577685 | 4.045393448621542e-05 | 66.10% | 194.96% | 2.95x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00011976045885320511 | 4.065938459538431e-05 | 66.05% | 194.55% | 2.95x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 4.858329757628907e-05 | 1.988127944280852e-05 | 59.08% | 144.37% | 2.44x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 4.855387575304769e-05 | 1.9941637743285994e-05 | 58.93% | 143.48% | 2.43x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.008981085238907e-05 | 1.8003899135847225e-05 | 55.09% | 122.67% | 2.23x | ✅ |
| `hexbytes_repr[b'']` | 2.1256028974296552e-05 | 1.223658507088991e-05 | 42.43% | 73.71% | 1.74x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.635368428877236e-05 | 1.668862849901069e-05 | 54.09% | 117.84% | 2.18x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.634514370888779e-05 | 1.3864126280912412e-05 | 47.38% | 90.02% | 1.90x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.226414345477574e-05 | 2.3255272927866288e-05 | 62.65% | 167.74% | 2.68x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007609159709365345 | 0.00022209270789552268 | 70.81% | 242.61% | 3.43x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.5897714162991117e-05 | 1.405638965004432e-05 | 45.72% | 84.24% | 1.84x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.7042804312999723e-05 | 1.3995638876754353e-05 | 48.25% | 93.22% | 1.93x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 2.854601220246259e-05 | 1.4338186719171458e-05 | 49.77% | 99.09% | 1.99x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 2.8453938722835887e-05 | 1.4307369016274955e-05 | 49.72% | 98.88% | 1.99x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.6209725100963914e-05 | 1.3997264756001084e-05 | 46.60% | 87.25% | 1.87x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 4.8749071843833654e-05 | 1.9904992635874923e-05 | 59.17% | 144.91% | 2.45x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.0003940625282863162 | 0.000119063507900311 | 69.79% | 230.97% | 3.31x | ✅ |
| `hexbytes_repr[b'abc']` | 2.7494140818546007e-05 | 1.4052507099729689e-05 | 48.89% | 95.65% | 1.96x | ✅ |
| `hexbytes_repr[long alternating]` | 0.00039889571155526937 | 0.00012210622233314622 | 69.39% | 226.68% | 3.27x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.731835713527467e-05 | 3.381065967953248e-05 | 65.26% | 187.83% | 2.88x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 2.889485554038484e-05 | 1.4608383629485458e-05 | 49.44% | 97.80% | 1.98x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 2.7777391564663843e-05 | 1.4257162650379524e-05 | 48.67% | 94.83% | 1.95x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.700564576572079e-05 | 1.4077278916735954e-05 | 47.87% | 91.84% | 1.92x | ✅ |
| `hexbytes_repr[palindrome]` | 3.183988941506099e-05 | 1.5598319742739584e-05 | 51.01% | 104.12% | 2.04x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.2497909366352e-05 | 2.3548132986502716e-05 | 62.32% | 165.40% | 2.65x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.5367762589858187e-05 | 1.358779014488275e-05 | 46.44% | 86.70% | 1.87x | ✅ |
| `hexbytes_repr[single null byte]` | 2.5458175210215784e-05 | 1.3684070526232381e-05 | 46.25% | 86.04% | 1.86x | ✅ |
| `hexbytes_repr[two patterns]` | 4.884890983894645e-05 | 1.9907056605837904e-05 | 59.25% | 145.38% | 2.45x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.5370799451297595e-05 | 1.3634626312694631e-05 | 11.30% | 12.73% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.191983447329672e-05 | 3.9536816987432156e-05 | 5.68% | 6.03% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.196748260044395e-05 | 3.9740747113016054e-05 | 5.31% | 5.60% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.043267065155027e-05 | 1.883572213429169e-05 | 7.82% | 8.48% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.0479340756089105e-05 | 1.8945328032765558e-05 | 7.49% | 8.10% | 1.08x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 1.8522441936129073e-05 | 1.6885187653475707e-05 | 8.84% | 9.70% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.0311224225692794e-05 | 1.1246419931725417e-05 | -9.07% | -8.32% | 0.92x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.743087229943741e-05 | 1.5651173021856147e-05 | 10.21% | 11.37% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.5074912846571253e-05 | 1.3164663054435767e-05 | 12.67% | 14.51% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.5397342058968475e-05 | 2.271138866049853e-05 | 10.58% | 11.83% | 1.12x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.0002223408110563982 | 0.00022515249285485575 | -1.26% | -1.25% | 0.99x | ❌ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.4876428006711005e-05 | 1.2983190811071517e-05 | 12.73% | 14.58% | 1.15x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.4940891781116816e-05 | 1.3095216542980952e-05 | 12.35% | 14.09% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.542779011270148e-05 | 1.3533346164302778e-05 | 12.28% | 14.00% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.5463045073202363e-05 | 1.356147753817059e-05 | 12.30% | 14.02% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.5143435275328573e-05 | 1.3046208442936195e-05 | 13.85% | 16.08% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.0719510297095625e-05 | 1.871656610604151e-05 | 9.67% | 10.70% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012271925645377112 | 0.0001218550167007452 | 0.70% | 0.71% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.4990316698278696e-05 | 1.2884744113013076e-05 | 14.05% | 16.34% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012259860347763968 | 0.00012174405601724464 | 0.70% | 0.70% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.5058009768601295e-05 | 3.314627808549722e-05 | 5.45% | 5.77% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.5331388552996817e-05 | 1.3598097132957384e-05 | 11.31% | 12.75% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.5020706356080184e-05 | 1.3257469535973157e-05 | 11.74% | 13.30% | 1.13x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.5009107403612732e-05 | 1.3180053668940104e-05 | 12.19% | 13.88% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.6381287290408762e-05 | 1.4831593910410773e-05 | 9.46% | 10.45% | 1.10x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.523642745508006e-05 | 2.2666938018813054e-05 | 10.18% | 11.34% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.4758901476580723e-05 | 1.2895500093242875e-05 | 12.63% | 14.45% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.4642341322941612e-05 | 1.2865557758032795e-05 | 12.13% | 13.81% | 1.14x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.085589110412041e-05 | 1.8915194841483562e-05 | 9.31% | 10.26% | 1.10x | ✅ |
