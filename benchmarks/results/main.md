#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/master/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.7045663213603162e-05 | 2.3252645245769508e-05 | 14.02% | 16.31% | 1.16x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.6571289969128953e-05 | 2.3127776036027967e-05 | 12.96% | 14.89% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.6906033284079438e-05 | 2.345353145446386e-05 | 12.83% | 14.72% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.765639630416011e-05 | 2.3323348319781747e-05 | 15.67% | 18.58% | 1.19x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.6976783119302784e-05 | 2.326039627454525e-05 | 13.78% | 15.98% | 1.16x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.6765656197608524e-05 | 2.328804666364873e-05 | 12.99% | 14.93% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.7024860137661136e-05 | 2.3313368394882313e-05 | 13.73% | 15.92% | 1.16x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.7068270237218137e-05 | 2.3619710816558898e-05 | 12.74% | 14.60% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.7112116929948994e-05 | 2.3261416435675894e-05 | 14.20% | 16.55% | 1.17x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.6837642103637056e-05 | 2.3299902189716362e-05 | 13.18% | 15.18% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.7076028708325745e-05 | 2.3401571821591564e-05 | 13.57% | 15.70% | 1.16x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.699032792855593e-05 | 2.312434080967765e-05 | 14.32% | 16.72% | 1.17x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.6883506126858973e-05 | 2.3611423609047916e-05 | 12.17% | 13.86% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.6991680797686346e-05 | 2.3518125183454762e-05 | 12.87% | 14.77% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.7014678321991576e-05 | 2.357462002494657e-05 | 12.73% | 14.59% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.6944838133688044e-05 | 2.3352689272338427e-05 | 13.33% | 15.38% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.7131826171117685e-05 | 2.333741716382322e-05 | 13.99% | 16.26% | 1.16x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.7265575779592337e-05 | 2.333284051627429e-05 | 14.42% | 16.85% | 1.17x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.67664952365638e-05 | 2.3161247083895418e-05 | 13.47% | 15.57% | 1.16x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.690352073881654e-05 | 2.3117198513820673e-05 | 14.07% | 16.38% | 1.16x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.707841387870215e-05 | 2.3419947523211666e-05 | 13.51% | 15.62% | 1.16x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.68814265017408e-05 | 2.3343560766520614e-05 | 13.16% | 15.16% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.6865392576013355e-05 | 2.3309035050279285e-05 | 13.24% | 15.26% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.6686459112254875e-05 | 2.345441538101888e-05 | 12.11% | 13.78% | 1.14x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.675635001143298e-05 | 2.3166761046410368e-05 | 13.42% | 15.49% | 1.15x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.680438344036613e-05 | 2.3191432003287966e-05 | 13.48% | 15.58% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.636177334793663e-05 | 2.263569005924967e-05 | 14.13% | 16.46% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.624946019457459e-05 | 2.264827654659856e-05 | 13.72% | 15.90% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.6252856346521e-05 | 2.267745806198306e-05 | 13.62% | 15.77% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.635519283811098e-05 | 2.266948971758634e-05 | 13.98% | 16.26% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.6145927130664207e-05 | 2.2515178334638967e-05 | 13.89% | 16.13% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.6224610060342333e-05 | 2.2536275292585656e-05 | 14.06% | 16.37% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.637015303356241e-05 | 2.2656836604754885e-05 | 14.08% | 16.39% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.6240260569123617e-05 | 2.2887868606084448e-05 | 12.78% | 14.65% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.6393751343714736e-05 | 2.2845412967358683e-05 | 13.44% | 15.53% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.624618854600758e-05 | 2.2736423274148198e-05 | 13.37% | 15.44% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.6206756624593717e-05 | 2.2657178156454782e-05 | 13.54% | 15.67% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6572454353021182e-05 | 2.2778477372248435e-05 | 14.28% | 16.66% | 1.17x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.6357147998471715e-05 | 2.2883008605692714e-05 | 13.18% | 15.18% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.6517884849881206e-05 | 2.285471643292031e-05 | 13.81% | 16.03% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.6320385070386268e-05 | 2.2759494549260197e-05 | 13.53% | 15.65% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.6220150168768218e-05 | 2.2550101815590724e-05 | 14.00% | 16.28% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.63106521701752e-05 | 2.2856836490191627e-05 | 13.13% | 15.11% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.6025088017158963e-05 | 2.2653380900293326e-05 | 12.96% | 14.88% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.628692841309762e-05 | 2.2763244949584093e-05 | 13.40% | 15.48% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.705567394557198e-05 | 2.253908647932582e-05 | 16.69% | 20.04% | 1.20x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.611526786593498e-05 | 2.302577178928471e-05 | 11.83% | 13.42% | 1.13x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.6498631457392508e-05 | 2.2797961116594425e-05 | 13.97% | 16.23% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.6100300961094033e-05 | 2.26177153895999e-05 | 13.34% | 15.40% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.6274477901776176e-05 | 2.2839145578939324e-05 | 13.07% | 15.04% | 1.15x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.6162853728045904e-05 | 2.24322280524927e-05 | 14.26% | 16.63% | 1.17x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.6282397378784643e-05 | 2.2507084466692006e-05 | 14.36% | 16.77% | 1.17x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.622865124904435e-05 | 2.256687519346886e-05 | 13.96% | 16.23% | 1.16x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.6300378605517474e-05 | 2.2535421673378635e-05 | 14.32% | 16.71% | 1.17x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.607896363715085e-05 | 2.3118178393387442e-05 | 11.35% | 12.81% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.6181199797019724e-05 | 2.2892428950337974e-05 | 12.56% | 14.37% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.607951543012091e-05 | 2.2921588938457392e-05 | 12.11% | 13.78% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.630700307791006e-05 | 2.2740592581344023e-05 | 13.56% | 15.68% | 1.16x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.6078876650979338e-05 | 2.271385560110853e-05 | 12.90% | 14.81% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.609224795722984e-05 | 2.275490510674699e-05 | 12.79% | 14.67% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.6361970339966242e-05 | 2.254061923328769e-05 | 14.50% | 16.95% | 1.17x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.6172064791167504e-05 | 2.305361980493903e-05 | 11.92% | 13.53% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.615878704746276e-05 | 2.281911265039591e-05 | 12.77% | 14.64% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.5967410112822673e-05 | 2.2783080098765848e-05 | 12.26% | 13.98% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.618989380352363e-05 | 2.288072392937355e-05 | 12.64% | 14.46% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6299790671643708e-05 | 2.247848077416913e-05 | 14.53% | 17.00% | 1.17x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.6225755820473415e-05 | 2.2747668106486436e-05 | 13.26% | 15.29% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.617026242680028e-05 | 2.2784296396428676e-05 | 12.94% | 14.86% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.617204480381179e-05 | 2.266036910640406e-05 | 13.42% | 15.50% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.6356943808501326e-05 | 2.2601339362836267e-05 | 14.25% | 16.62% | 1.17x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.6410331752252605e-05 | 2.277584486643924e-05 | 13.76% | 15.96% | 1.16x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.6439542661794585e-05 | 2.264588781118198e-05 | 14.35% | 16.75% | 1.17x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.599319557002723e-05 | 2.2565016099301727e-05 | 13.19% | 15.19% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.598304767678258e-05 | 2.268955338443805e-05 | 12.68% | 14.52% | 1.15x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.6013018588256978e-05 | 2.444217845844216e-05 | 6.04% | 6.43% | 1.06x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.613898235436535e-05 | 2.2988384547770255e-05 | 12.05% | 13.71% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.6093301292507025e-05 | 2.3181076524075756e-05 | 11.16% | 12.56% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.617818642800731e-05 | 2.2896723910961102e-05 | 12.54% | 14.33% | 1.14x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.6217640176585808e-05 | 2.3234030622644355e-05 | 11.38% | 12.84% | 1.13x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.5976593624608552e-05 | 2.2813266549596167e-05 | 12.18% | 13.87% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.606246331582412e-05 | 2.2759884319077652e-05 | 12.67% | 14.51% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.6190174183802678e-05 | 2.2582996705708644e-05 | 13.77% | 15.97% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.6289086617789664e-05 | 2.2573382930946462e-05 | 14.13% | 16.46% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.6207498276619253e-05 | 2.252059899339918e-05 | 14.07% | 16.37% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.6195363434230616e-05 | 2.265461018952547e-05 | 13.52% | 15.63% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.61737391751335e-05 | 2.2655824818981943e-05 | 13.44% | 15.53% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.588936317305409e-05 | 2.261446475700599e-05 | 12.65% | 14.48% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.6203502485514514e-05 | 2.263029455259934e-05 | 13.64% | 15.79% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.6198974684056476e-05 | 2.2673377876813537e-05 | 13.46% | 15.55% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.6356734303534115e-05 | 2.2681935072216114e-05 | 13.94% | 16.20% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.6057918566499063e-05 | 2.255757430832228e-05 | 13.43% | 15.52% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6293918348591688e-05 | 2.3142308764672826e-05 | 11.99% | 13.62% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.5952351352321425e-05 | 2.2958598560610506e-05 | 11.54% | 13.04% | 1.13x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.601451423358997e-05 | 2.2486452922601555e-05 | 13.56% | 15.69% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.6023251754760866e-05 | 2.280265453151492e-05 | 12.38% | 14.12% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.618299703847423e-05 | 2.33704105026335e-05 | 10.74% | 12.03% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.5950552254148282e-05 | 2.3164878202452085e-05 | 10.73% | 12.03% | 1.12x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.5960933617892023e-05 | 2.266381789566787e-05 | 12.70% | 14.55% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.611652309888828e-05 | 2.2461545157669076e-05 | 13.99% | 16.27% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.617378770361314e-05 | 2.2711407263701194e-05 | 13.23% | 15.25% | 1.15x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.606566697429907e-05 | 2.2455220713969143e-05 | 13.85% | 16.08% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.6124715251511907e-05 | 2.2483632309461417e-05 | 13.94% | 16.19% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.6166350020553696e-05 | 2.258951085963597e-05 | 13.67% | 15.83% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.59914870209384e-05 | 2.271100863752231e-05 | 12.62% | 14.44% | 1.14x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.6212174928589997e-05 | 2.2665868761892473e-05 | 13.53% | 15.65% | 1.16x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.6377895730062437e-05 | 2.261820326842301e-05 | 14.25% | 16.62% | 1.17x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.698737212168236e-05 | 2.24464414211307e-05 | 16.83% | 20.23% | 1.20x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.623796571260087e-05 | 2.28808907754413e-05 | 12.79% | 14.67% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.6322584397987874e-05 | 2.2969578939412906e-05 | 12.74% | 14.60% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.622455082833129e-05 | 2.260979974395698e-05 | 13.78% | 15.99% | 1.16x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.632896674698107e-05 | 2.288371251044881e-05 | 13.09% | 15.06% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.6368452799073598e-05 | 2.255266878860916e-05 | 14.47% | 16.92% | 1.17x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.643458799169229e-05 | 2.2791003565394066e-05 | 13.78% | 15.99% | 1.16x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.628089291150854e-05 | 2.258609776192726e-05 | 14.06% | 16.36% | 1.16x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.6233695394948453e-05 | 2.2704008139020553e-05 | 13.45% | 15.55% | 1.16x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.6370209945404797e-05 | 2.3020773306089587e-05 | 12.70% | 14.55% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.62393868019764e-05 | 2.279724288076464e-05 | 13.12% | 15.10% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.63867459389277e-05 | 2.249701249321602e-05 | 14.74% | 17.29% | 1.17x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.62847288600303e-05 | 2.25239489067006e-05 | 14.31% | 16.70% | 1.17x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.6338924172478715e-05 | 2.2685619622021867e-05 | 13.87% | 16.10% | 1.16x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.6483095708499987e-05 | 2.2506940563192575e-05 | 15.01% | 17.67% | 1.18x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.631770266384041e-05 | 2.2636118662874118e-05 | 13.99% | 16.26% | 1.16x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.6453529998873113e-05 | 2.2725938268544267e-05 | 14.09% | 16.40% | 1.16x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.6419634147887595e-05 | 2.251308587669294e-05 | 14.79% | 17.35% | 1.17x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.641064545976519e-05 | 2.262761172444175e-05 | 14.32% | 16.72% | 1.17x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.640816125703366e-05 | 2.284743450062705e-05 | 13.48% | 15.58% | 1.16x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.6085626910848803e-05 | 2.265955540123913e-05 | 13.13% | 15.12% | 1.15x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.624770770429263e-05 | 2.2992128223763692e-05 | 12.40% | 14.16% | 1.14x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.642552098616976e-05 | 2.2822447337589273e-05 | 13.63% | 15.79% | 1.16x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.6247825644791327e-05 | 2.292148195084362e-05 | 12.67% | 14.51% | 1.15x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.62172439274072e-05 | 2.2432372180874523e-05 | 14.44% | 16.87% | 1.17x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.6351237698901027e-05 | 2.2611807860433203e-05 | 14.19% | 16.54% | 1.17x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.608398142569889e-05 | 2.258786093357672e-05 | 13.40% | 15.48% | 1.15x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.6338251649419728e-05 | 2.2639611553508868e-05 | 14.04% | 16.34% | 1.16x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.6225852563830037e-05 | 2.2847430770368754e-05 | 12.88% | 14.79% | 1.15x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.6334794249865677e-05 | 2.272240912194253e-05 | 13.72% | 15.90% | 1.16x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.6634377681747357e-05 | 2.248311431758769e-05 | 15.59% | 18.46% | 1.18x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.6380298701783958e-05 | 2.2726003240035646e-05 | 13.85% | 16.08% | 1.16x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.6366786152936906e-05 | 2.2716962375174974e-05 | 13.84% | 16.07% | 1.16x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.6311281955419918e-05 | 2.2767868951125733e-05 | 13.47% | 15.56% | 1.16x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.6433617526996256e-05 | 2.2660491305872975e-05 | 14.27% | 16.65% | 1.17x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.643495151705763e-05 | 2.2780073080147686e-05 | 13.83% | 16.04% | 1.16x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.6402350318863106e-05 | 2.269855570699563e-05 | 14.03% | 16.32% | 1.16x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.6463750622762915e-05 | 2.2716828608885632e-05 | 14.16% | 16.49% | 1.16x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.6371798488779737e-05 | 2.2633334685392293e-05 | 14.18% | 16.52% | 1.17x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.6232203853696038e-05 | 2.3004740669919177e-05 | 12.30% | 14.03% | 1.14x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.6565811758813994e-05 | 2.2715092998839988e-05 | 14.50% | 16.95% | 1.17x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.619321928832791e-05 | 2.2751495973102418e-05 | 13.14% | 15.13% | 1.15x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.6179165882893174e-05 | 2.274185559596704e-05 | 13.13% | 15.11% | 1.15x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.6293933087827802e-05 | 2.2685731124720035e-05 | 13.72% | 15.91% | 1.16x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.6314884840733716e-05 | 2.2840116078826176e-05 | 13.20% | 15.21% | 1.15x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.629592322177165e-05 | 2.2725639196767652e-05 | 13.58% | 15.71% | 1.16x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.6295186532700034e-05 | 2.31528936926749e-05 | 11.95% | 13.57% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.6345979036914747e-05 | 2.342847540500282e-05 | 11.07% | 12.45% | 1.12x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.6370888423967636e-05 | 2.3120745145957465e-05 | 12.32% | 14.06% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.6178236507825523e-05 | 2.3118009694731672e-05 | 11.69% | 13.24% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.6339782883556265e-05 | 2.3131973312186587e-05 | 12.18% | 13.87% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.674424702068578e-05 | 2.3079070834070496e-05 | 13.70% | 15.88% | 1.16x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.6571619808750507e-05 | 2.300727943309035e-05 | 13.41% | 15.49% | 1.15x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.6375988368402327e-05 | 2.2708867220829585e-05 | 13.90% | 16.15% | 1.16x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.6406248572502565e-05 | 2.3179675607529797e-05 | 12.22% | 13.92% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.6286414121699828e-05 | 2.289738681522584e-05 | 12.89% | 14.80% | 1.15x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.630306545635635e-05 | 2.2778942951932033e-05 | 13.40% | 15.47% | 1.15x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.6439816340743568e-05 | 2.2893633859293604e-05 | 13.41% | 15.49% | 1.15x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.6279479112197687e-05 | 2.276608974723965e-05 | 13.37% | 15.43% | 1.15x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.6441778515692264e-05 | 2.315578371945644e-05 | 12.43% | 14.19% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.6492783037798566e-05 | 2.3022040718382036e-05 | 13.10% | 15.08% | 1.15x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.6417068372520012e-05 | 2.331186752924346e-05 | 11.75% | 13.32% | 1.13x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.6432651354677192e-05 | 2.3224563962215195e-05 | 12.14% | 13.81% | 1.14x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.630100445592399e-05 | 2.2723141240318865e-05 | 13.60% | 15.75% | 1.16x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.6615782813062614e-05 | 2.3056514963426364e-05 | 13.37% | 15.44% | 1.15x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.6487623295644067e-05 | 2.300423766020276e-05 | 13.15% | 15.14% | 1.15x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 7.859067847794042e-05 | 5.711251331045037e-05 | 27.33% | 37.61% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 7.936330238144415e-05 | 5.780797184043233e-05 | 27.16% | 37.29% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 7.960404675865159e-05 | 5.7471797894480154e-05 | 27.80% | 38.51% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.024685624299178e-05 | 5.747875493182798e-05 | 28.37% | 39.61% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 7.927559469979406e-05 | 5.700866608376819e-05 | 28.09% | 39.06% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.019462338930509e-05 | 5.781363879521255e-05 | 27.91% | 38.71% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 7.820289955411469e-05 | 5.441934407450702e-05 | 30.41% | 43.70% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 7.921188980494876e-05 | 5.712830832856324e-05 | 27.88% | 38.66% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 7.916870538649445e-05 | 5.68987464680326e-05 | 28.13% | 39.14% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 7.888486902992575e-05 | 5.7349945351038664e-05 | 27.30% | 37.55% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 7.857815070787706e-05 | 5.800955796520748e-05 | 26.18% | 35.46% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 7.983117742612094e-05 | 5.775213134769164e-05 | 27.66% | 38.23% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.850082717719082e-05 | 5.730343255684294e-05 | 27.00% | 36.99% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 7.909234939676836e-05 | 5.7489655939473715e-05 | 27.31% | 37.58% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 7.984028504568569e-05 | 5.712941228371429e-05 | 28.45% | 39.75% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 7.869551495745217e-05 | 5.7444569888461706e-05 | 27.00% | 36.99% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 7.932340551015052e-05 | 5.702178620247004e-05 | 28.11% | 39.11% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 7.908445485901679e-05 | 5.693140544307448e-05 | 28.01% | 38.91% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 7.893183379157636e-05 | 5.712427621343328e-05 | 27.63% | 38.18% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.441580695158523e-05 | 5.7873406914915317e-05 | 31.44% | 45.86% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 7.882313865065153e-05 | 5.7828993518356604e-05 | 26.63% | 36.30% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 7.921858373182251e-05 | 5.7670719880563826e-05 | 27.20% | 37.36% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.071730826545629e-05 | 5.7467056850495656e-05 | 28.80% | 40.46% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.036343777767177e-05 | 5.7904964103545716e-05 | 27.95% | 38.79% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 7.846904738368497e-05 | 5.732117767311009e-05 | 26.95% | 36.89% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.021523720413665e-05 | 5.8101702083540534e-05 | 27.57% | 38.06% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 7.821492229503351e-05 | 5.289984804440391e-05 | 32.37% | 47.85% | 1.48x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 7.809430318704574e-05 | 5.3721462991877045e-05 | 31.21% | 45.37% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.010727240074329e-05 | 5.7798268993837e-05 | 27.85% | 38.60% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 7.996349782023345e-05 | 5.8667279349513145e-05 | 26.63% | 36.30% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 7.968227349737567e-05 | 5.8259890164730534e-05 | 26.88% | 36.77% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 7.77564402829691e-05 | 5.8145327617092024e-05 | 25.22% | 33.73% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.035213647536931e-05 | 5.834813521348654e-05 | 27.38% | 37.71% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 7.992311779598912e-05 | 5.8420945272427824e-05 | 26.90% | 36.81% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 7.975641586813343e-05 | 5.818263399071827e-05 | 27.05% | 37.08% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 7.751553388519947e-05 | 5.495231098896673e-05 | 29.11% | 41.06% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 7.877751780097306e-05 | 5.865690587015012e-05 | 25.54% | 34.30% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 7.902725385277372e-05 | 5.8514352550344416e-05 | 25.96% | 35.06% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 7.983672741872301e-05 | 5.8579369373521125e-05 | 26.63% | 36.29% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 7.961392190244415e-05 | 5.8587755878248244e-05 | 26.41% | 35.89% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 7.999255907648963e-05 | 5.8544835429786365e-05 | 26.81% | 36.63% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.914700390796373e-05 | 5.862692179701353e-05 | 25.93% | 35.00% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.017331709638561e-05 | 5.8312791742966944e-05 | 27.27% | 37.49% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.00444035656013e-05 | 5.844997277992316e-05 | 26.98% | 36.95% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 7.92235208372438e-05 | 5.843623387679273e-05 | 26.24% | 35.57% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 7.854600200631447e-05 | 5.8538293102560744e-05 | 25.47% | 34.18% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 7.914168527917181e-05 | 5.943595537074102e-05 | 24.90% | 33.15% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.000095448229295e-05 | 5.9303838734393154e-05 | 25.87% | 34.90% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 7.970630762713922e-05 | 5.8385042252964234e-05 | 26.75% | 36.52% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.191707414065062e-05 | 5.8166236203743744e-05 | 28.99% | 40.83% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 7.877536347596523e-05 | 5.949077591387236e-05 | 24.48% | 32.42% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 7.821976585750795e-05 | 5.7879532896360813e-05 | 26.00% | 35.14% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 7.872014359136813e-05 | 5.829455692311867e-05 | 25.95% | 35.04% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 7.897538246691462e-05 | 5.8770149298136064e-05 | 25.58% | 34.38% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 7.97540578725142e-05 | 5.829842684068627e-05 | 26.90% | 36.80% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 7.87225267201029e-05 | 5.405586201428695e-05 | 31.33% | 45.63% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 7.869056943838973e-05 | 5.425167381958647e-05 | 31.06% | 45.05% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.042898834705178e-05 | 5.8601107832666235e-05 | 27.14% | 37.25% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 7.934801665659296e-05 | 5.8429029795305565e-05 | 26.36% | 35.80% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.001932652581165e-05 | 5.8087900507263336e-05 | 27.41% | 37.76% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 7.925868607664793e-05 | 5.7876690513517255e-05 | 26.98% | 36.94% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.06750365039871e-05 | 5.776828542717162e-05 | 28.39% | 39.65% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 7.976199958609529e-05 | 5.782988620590164e-05 | 27.50% | 37.93% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.289457978358176e-05 | 5.7746956336312996e-05 | 30.34% | 43.55% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 7.908062251560208e-05 | 5.529866584400515e-05 | 30.07% | 43.01% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 7.964265675050785e-05 | 5.840289877323834e-05 | 26.67% | 36.37% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 7.915655350722307e-05 | 5.7937037345540876e-05 | 26.81% | 36.63% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 7.96850977788628e-05 | 5.781773081029279e-05 | 27.44% | 37.82% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 7.850017097771839e-05 | 5.806706686501504e-05 | 26.03% | 35.19% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 7.89171399522282e-05 | 5.8169388076227564e-05 | 26.29% | 35.67% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.97245505848514e-05 | 5.7785003647991336e-05 | 27.52% | 37.97% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 7.859730188056747e-05 | 5.803844755921861e-05 | 26.16% | 35.42% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 7.882124402486491e-05 | 5.7799739460294666e-05 | 26.67% | 36.37% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.061605002077809e-05 | 5.7606353251128324e-05 | 28.54% | 39.94% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.004083820717552e-05 | 5.8568132312588985e-05 | 26.83% | 36.66% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 7.859571683502755e-05 | 5.8217163814007954e-05 | 25.93% | 35.00% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.058059172472149e-05 | 5.7725291869190174e-05 | 28.36% | 39.59% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 7.960063002429925e-05 | 5.718917463630582e-05 | 28.15% | 39.19% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 7.92428194737003e-05 | 5.860039607464952e-05 | 26.05% | 35.23% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 7.901045877540352e-05 | 5.824061037440897e-05 | 26.29% | 35.66% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 7.92279611300153e-05 | 5.837845342595747e-05 | 26.32% | 35.71% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 7.871581653620961e-05 | 5.786705169265307e-05 | 26.49% | 36.03% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 7.98519275258831e-05 | 5.7860348959340026e-05 | 27.54% | 38.01% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 7.906484474549107e-05 | 5.838230973685656e-05 | 26.16% | 35.43% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 7.77663452171515e-05 | 5.5443830859073597e-05 | 28.70% | 40.26% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 7.778204563635427e-05 | 5.525884678027516e-05 | 28.96% | 40.76% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 7.954441520974079e-05 | 5.7466055742324685e-05 | 27.76% | 38.42% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 7.858206993506043e-05 | 5.729988121840593e-05 | 27.08% | 37.14% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 7.881279884244843e-05 | 5.7412696409662466e-05 | 27.15% | 37.27% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 7.827759686063628e-05 | 5.7187502003592944e-05 | 26.94% | 36.88% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 7.79710367956855e-05 | 5.7381794638435116e-05 | 26.41% | 35.88% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 7.950475867528553e-05 | 5.649709319889825e-05 | 28.94% | 40.72% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 7.947529181991568e-05 | 5.65065165856521e-05 | 28.90% | 40.65% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 7.7812663433987e-05 | 5.3877067315205784e-05 | 30.76% | 44.43% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 7.858867946735162e-05 | 5.724814776295083e-05 | 27.15% | 37.28% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 7.859422044726847e-05 | 5.757700751625377e-05 | 26.74% | 36.50% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 7.7911467625034e-05 | 5.8013132769057015e-05 | 25.54% | 34.30% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010127225993342595 | 7.870134913607176e-05 | 22.29% | 28.68% | 1.29x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 7.697895331710877e-05 | 5.2988725283503714e-05 | 31.16% | 45.27% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.91949687681251e-05 | 5.654861415143893e-05 | 28.60% | 40.05% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 7.752116335112174e-05 | 5.7246248407591914e-05 | 26.15% | 35.42% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 7.767216219230838e-05 | 5.7624779366273025e-05 | 25.81% | 34.79% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 7.760054707993599e-05 | 5.693854634587441e-05 | 26.63% | 36.29% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 7.779698031081451e-05 | 5.711578871512737e-05 | 26.58% | 36.21% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.793583268457825e-05 | 7.329902159984553e-05 | 25.16% | 33.61% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 7.637643647277932e-05 | 5.3133195308590136e-05 | 30.43% | 43.75% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.61545798268772e-05 | 7.28126272647009e-05 | 24.28% | 32.06% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 7.858858359110605e-05 | 5.777517240358822e-05 | 26.48% | 36.02% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 7.944369366859939e-05 | 5.731919199948698e-05 | 27.85% | 38.60% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 7.809736086238741e-05 | 5.708150187065767e-05 | 26.91% | 36.82% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 7.933812488666128e-05 | 5.7268183286301854e-05 | 27.82% | 38.54% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 7.853159523222154e-05 | 5.69931046565636e-05 | 27.43% | 37.79% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 7.817305780963554e-05 | 5.766571158446556e-05 | 26.23% | 35.56% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 7.755240559961784e-05 | 5.421880198395802e-05 | 30.09% | 43.04% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.723697301681406e-05 | 5.4009218194638414e-05 | 30.07% | 43.01% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 7.822633796261809e-05 | 5.68808251724376e-05 | 27.29% | 37.53% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 7.625448349389461e-05 | 5.634148409353942e-05 | 26.11% | 35.34% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 7.877944010198457e-05 | 5.6860250468223115e-05 | 27.82% | 38.55% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 7.858865770699528e-05 | 5.682309375588915e-05 | 27.70% | 38.30% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 7.723774079441621e-05 | 6.191629866768754e-05 | 19.84% | 24.75% | 1.25x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 7.704049987858344e-05 | 6.188679595258922e-05 | 19.67% | 24.49% | 1.24x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 7.732361170324641e-05 | 5.648870495115295e-05 | 26.95% | 36.88% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.631173613915138e-05 | 5.3415315452645535e-05 | 30.00% | 42.86% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 7.747385227727445e-05 | 5.605782658242897e-05 | 27.64% | 38.20% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 7.702424461436868e-05 | 5.6620500235933944e-05 | 26.49% | 36.04% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 7.754864525754467e-05 | 5.79384016389564e-05 | 25.29% | 33.85% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010246621755957913 | 7.777887064368392e-05 | 24.09% | 31.74% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 7.767407542458515e-05 | 5.5840631980147184e-05 | 28.11% | 39.10% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 7.745684957208618e-05 | 5.669584932186112e-05 | 26.80% | 36.62% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 7.636314514508946e-05 | 5.585803830942456e-05 | 26.85% | 36.71% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 7.664360423879767e-05 | 5.5854548082724426e-05 | 27.12% | 37.22% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 7.744707191278002e-05 | 5.616568966390283e-05 | 27.48% | 37.89% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 7.824771259493029e-05 | 5.678039908951349e-05 | 27.44% | 37.81% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.531478849710618e-05 | 7.18236616384402e-05 | 24.65% | 32.71% | 1.33x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 7.756892526585059e-05 | 5.623043282060698e-05 | 27.51% | 37.95% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.623602209496916e-05 | 7.28783302908822e-05 | 24.27% | 32.05% | 1.32x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 7.748735784137666e-05 | 5.636808203054034e-05 | 27.26% | 37.47% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 7.772190095392285e-05 | 5.640113513162787e-05 | 27.43% | 37.80% | 1.38x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 7.712906218456591e-05 | 5.6510108161224924e-05 | 26.73% | 36.49% | 1.36x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 7.767319988746671e-05 | 5.656066849733594e-05 | 27.18% | 37.33% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 7.817875484123064e-05 | 5.629879603150327e-05 | 27.99% | 38.86% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 7.805459335315096e-05 | 5.700956436629433e-05 | 26.96% | 36.91% | 1.37x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.564309799262054e-05 | 5.3667546148731105e-05 | 29.05% | 40.95% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.531279493906434e-05 | 5.2627398133381626e-05 | 30.12% | 43.11% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 7.779978032881977e-05 | 5.687577092855308e-05 | 26.89% | 36.79% | 1.37x | ✅ |
| `hexbytes_new['']` | 7.271623678176946e-05 | 3.3984170768132537e-05 | 53.26% | 113.97% | 2.14x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.305765903187229e-05 | 4.952415826592056e-05 | 46.78% | 87.90% | 1.88x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.452027200484485e-05 | 4.871567653288358e-05 | 48.46% | 94.02% | 1.94x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 8.9061543767908e-05 | 4.4880827742969e-05 | 49.61% | 98.44% | 1.98x | ✅ |
| `hexbytes_new['0x']` | 7.627229167685399e-05 | 3.551278084944391e-05 | 53.44% | 114.77% | 2.15x | ✅ |
| `hexbytes_new['0x1234']` | 8.57370175314419e-05 | 4.63127870645126e-05 | 45.98% | 85.13% | 1.85x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.582966496811365e-05 | 4.264040706288031e-05 | 50.32% | 101.29% | 2.01x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.498637189807958e-05 | 4.286798840949111e-05 | 49.56% | 98.25% | 1.98x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.767842100500439e-05 | 4.2924721177782326e-05 | 51.04% | 104.26% | 2.04x | ✅ |
| `hexbytes_new['abc']` | 8.602038213979949e-05 | 4.478612508135352e-05 | 47.94% | 92.07% | 1.92x | ✅ |
| `hexbytes_new['deadbeef']` | 7.832967165282694e-05 | 3.915984567049862e-05 | 50.01% | 100.03% | 2.00x | ✅ |
| `hexbytes_new[0-9]` | 4.293532897680076e-05 | 2.459586357555252e-05 | 42.71% | 74.56% | 1.75x | ✅ |
| `hexbytes_new[0]` | 0.00012325068832354715 | 6.153295665637339e-05 | 50.07% | 100.30% | 2.00x | ✅ |
| `hexbytes_new[123456]` | 0.00012493129253247584 | 6.420487464884419e-05 | 48.61% | 94.58% | 1.95x | ✅ |
| `hexbytes_new[2**16]` | 0.0001246295212093868 | 6.438436154284313e-05 | 48.34% | 93.57% | 1.94x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00012894753574241462 | 6.698808972984916e-05 | 48.05% | 92.49% | 1.92x | ✅ |
| `hexbytes_new[2**32]` | 0.0001270929786431804 | 6.706232303226306e-05 | 47.23% | 89.51% | 1.90x | ✅ |
| `hexbytes_new[2**64]` | 0.00012688167376413397 | 7.191526385619497e-05 | 43.32% | 76.43% | 1.76x | ✅ |
| `hexbytes_new[2**8]` | 0.00012636556943936426 | 6.45833019198721e-05 | 48.89% | 95.66% | 1.96x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.3640081250804827e-05 | 2.5451677778543218e-05 | 41.68% | 71.46% | 1.71x | ✅ |
| `hexbytes_new[False]` | 5.940162793186441e-05 | 2.55454409948633e-05 | 57.00% | 132.53% | 2.33x | ✅ |
| `hexbytes_new[True]` | 6.0310143372616375e-05 | 2.542866085040463e-05 | 57.84% | 137.17% | 2.37x | ✅ |
| `hexbytes_new[all byte values]` | 4.401214235419756e-05 | 2.534405862458693e-05 | 42.42% | 73.66% | 1.74x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.283184304302925e-05 | 2.480041061705177e-05 | 42.10% | 72.71% | 1.73x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.2881601989487086e-05 | 2.4833774930562835e-05 | 42.09% | 72.67% | 1.73x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.113478563919979e-05 | 2.4554128559541738e-05 | 40.31% | 67.53% | 1.68x | ✅ |
| `hexbytes_new[b'']` | 4.251837271724906e-05 | 2.456724291131305e-05 | 42.22% | 73.07% | 1.73x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.261191090726399e-05 | 2.472907878262464e-05 | 41.97% | 72.31% | 1.72x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.313246485540911e-05 | 2.4711962002379603e-05 | 42.71% | 74.54% | 1.75x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.295378608273096e-05 | 2.4658320405005672e-05 | 42.59% | 74.20% | 1.74x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.6583208191182606e-05 | 3.7356334166289915e-05 | 33.98% | 51.47% | 1.51x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.259300539834232e-05 | 2.478281278435352e-05 | 41.81% | 71.87% | 1.72x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.2938455926596154e-05 | 2.4601017466278675e-05 | 42.71% | 74.54% | 1.75x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.217317925174486e-05 | 2.4583585140525773e-05 | 41.71% | 71.55% | 1.72x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.270445737904467e-05 | 2.43689635792277e-05 | 42.94% | 75.24% | 1.75x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.329399092831953e-05 | 2.5616247232610073e-05 | 40.83% | 69.01% | 1.69x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.290581069354821e-05 | 2.494120005388025e-05 | 41.87% | 72.03% | 1.72x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.2283717303587175e-05 | 3.274901277994761e-05 | 37.36% | 59.65% | 1.60x | ✅ |
| `hexbytes_new[b'abc']` | 4.286598501908027e-05 | 2.4604167717593547e-05 | 42.60% | 74.22% | 1.74x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.76389556888034e-05 | 3.508003147071454e-05 | 48.14% | 92.81% | 1.93x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 6.852289001867651e-05 | 3.550298722499004e-05 | 48.19% | 93.01% | 1.93x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 6.869543426772694e-05 | 3.5977165043456425e-05 | 47.63% | 90.94% | 1.91x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 6.889195177095441e-05 | 3.522454724219988e-05 | 48.87% | 95.58% | 1.96x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 6.836271478315116e-05 | 3.547905292979195e-05 | 48.10% | 92.68% | 1.93x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 6.734863646797574e-05 | 3.7589814027633185e-05 | 44.19% | 79.17% | 1.79x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.635883401286276e-05 | 3.354262600332142e-05 | 49.45% | 97.83% | 1.98x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.72959786344951e-05 | 3.5207017907214696e-05 | 47.68% | 91.14% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.805234368565369e-05 | 3.557961521656525e-05 | 47.72% | 91.27% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 6.834339153058881e-05 | 3.5618749826697616e-05 | 47.88% | 91.87% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.035329669583093e-05 | 5.594424099981089e-05 | 38.08% | 61.51% | 1.62x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.871427179601022e-05 | 3.525766670481736e-05 | 48.69% | 94.89% | 1.95x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 6.778186137162823e-05 | 3.5611976555863086e-05 | 47.46% | 90.33% | 1.90x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 7.022354262270229e-05 | 3.640358980817393e-05 | 48.16% | 92.90% | 1.93x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.76495172747607e-05 | 3.55032296073834e-05 | 47.52% | 90.54% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.855936510729542e-05 | 3.506017164445726e-05 | 48.86% | 95.55% | 1.96x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 6.987673760482794e-05 | 3.6439572464152364e-05 | 47.85% | 91.76% | 1.92x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.321289086141879e-05 | 4.887808245674208e-05 | 41.26% | 70.25% | 1.70x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.825962504578753e-05 | 3.539812838007707e-05 | 48.14% | 92.83% | 1.93x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.330694795641239e-05 | 4.887559156777881e-05 | 41.33% | 70.45% | 1.70x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 6.789022528613585e-05 | 3.532857815385634e-05 | 47.96% | 92.17% | 1.92x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 6.762557862366925e-05 | 3.553010434120664e-05 | 47.46% | 90.33% | 1.90x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.81842563111184e-05 | 3.533084161384177e-05 | 48.18% | 92.99% | 1.93x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.806621333249752e-05 | 3.546674342333743e-05 | 47.89% | 91.92% | 1.92x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 6.718734504776916e-05 | 3.541845098111599e-05 | 47.28% | 89.70% | 1.90x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 6.840609787053368e-05 | 3.653087462756684e-05 | 46.60% | 87.26% | 1.87x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 6.878659533482647e-05 | 3.5743370732690417e-05 | 48.04% | 92.45% | 1.92x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.842130085243178e-05 | 3.5464618405547485e-05 | 48.17% | 92.93% | 1.93x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 6.761712912588826e-05 | 3.535745329291797e-05 | 47.71% | 91.24% | 1.91x | ✅ |
| `hexbytes_new[long alternating]` | 5.0220727032255305e-05 | 3.2805204393352756e-05 | 34.68% | 53.09% | 1.53x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.189558609148845e-05 | 4.040834542701946e-05 | 50.66% | 102.67% | 2.03x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.286224725635995e-05 | 4.195511958302775e-05 | 49.37% | 97.50% | 1.98x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.237912461649142e-05 | 4.1925004239216294e-05 | 49.11% | 96.49% | 1.96x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.128003476815153e-05 | 4.054548266668433e-05 | 50.12% | 100.47% | 2.00x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.13883483166089e-05 | 4.0988668315978304e-05 | 49.64% | 98.56% | 1.99x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.172060143854847e-05 | 4.200357029903757e-05 | 48.60% | 94.56% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 7.955922830781919e-05 | 3.878850930364994e-05 | 51.25% | 105.11% | 2.05x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.23573402116845e-05 | 4.235060899356985e-05 | 48.58% | 94.47% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.1185913890271e-05 | 4.0070794490143055e-05 | 50.64% | 102.61% | 2.03x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.171173426484916e-05 | 4.211449454201919e-05 | 48.46% | 94.02% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.00010261038467404144 | 6.207283216422303e-05 | 39.51% | 65.31% | 1.65x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.264409551149367e-05 | 4.027469276569086e-05 | 51.27% | 105.20% | 2.05x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.228011851078971e-05 | 4.081190965118082e-05 | 50.40% | 101.61% | 2.02x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.202299466416732e-05 | 4.021335117485355e-05 | 50.97% | 103.97% | 2.04x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.179907847554882e-05 | 4.05063771617911e-05 | 50.48% | 101.94% | 2.02x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.194675126033467e-05 | 4.0497833139024386e-05 | 50.58% | 102.35% | 2.02x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.147313673823656e-05 | 4.110273158392636e-05 | 49.55% | 98.22% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 9.692608695666298e-05 | 5.550439548619923e-05 | 42.74% | 74.63% | 1.75x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.11295275391096e-05 | 4.028238938213678e-05 | 50.35% | 101.40% | 2.01x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 0.0001027853972673967 | 5.5895654069508596e-05 | 45.62% | 83.89% | 1.84x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.318436857919552e-05 | 4.062123676690536e-05 | 51.17% | 104.78% | 2.05x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.227698379957292e-05 | 4.046864767559555e-05 | 50.81% | 103.31% | 2.03x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.286997657507609e-05 | 4.035903717429154e-05 | 51.30% | 105.33% | 2.05x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.268349213581008e-05 | 4.045406264178703e-05 | 51.07% | 104.39% | 2.04x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.112766003556311e-05 | 4.056094664058613e-05 | 50.00% | 100.01% | 2.00x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.309192833794522e-05 | 4.191206421282437e-05 | 49.56% | 98.25% | 1.98x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.327751937138449e-05 | 4.072304630950545e-05 | 51.10% | 104.50% | 2.04x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.456554544648902e-05 | 4.094265107725604e-05 | 51.58% | 106.55% | 2.07x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.190641105933686e-05 | 4.0856038640469245e-05 | 50.12% | 100.48% | 2.00x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.3582718675414885e-05 | 2.4761906306350384e-05 | 43.18% | 76.01% | 1.76x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.331020112968883e-05 | 2.5060151848926422e-05 | 42.14% | 72.82% | 1.73x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.284383691919248e-05 | 2.4448647312238923e-05 | 42.94% | 75.24% | 1.75x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.1839431895671174e-05 | 2.438663585235966e-05 | 41.71% | 71.57% | 1.72x | ✅ |
| `hexbytes_new[palindrome]` | 4.260238659576961e-05 | 2.464292553057367e-05 | 42.16% | 72.88% | 1.73x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.272197828262132e-05 | 2.482299298095174e-05 | 41.90% | 72.11% | 1.72x | ✅ |
| `hexbytes_new[single 0xff]` | 4.251397077504648e-05 | 2.4725444850091897e-05 | 41.84% | 71.94% | 1.72x | ✅ |
| `hexbytes_new[single null byte]` | 4.228841461222143e-05 | 2.4615736639632126e-05 | 41.79% | 71.79% | 1.72x | ✅ |
| `hexbytes_new[two patterns]` | 4.3224585002552075e-05 | 2.489104634967045e-05 | 42.41% | 73.66% | 1.74x | ✅ |
| `hexbytes_repr[0-9]` | 3.242247289872427e-05 | 1.5948157449788142e-05 | 50.81% | 103.30% | 2.03x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012584608768817783 | 4.165170891550845e-05 | 66.90% | 202.14% | 3.02x | ✅ |
| `hexbytes_repr[all byte values]` | 0.0001250485927826633 | 4.160728426062553e-05 | 66.73% | 200.54% | 3.01x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.336798202098357e-05 | 2.13225295458856e-05 | 60.05% | 150.29% | 2.50x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.199016160622724e-05 | 2.119197639586188e-05 | 59.24% | 145.33% | 2.45x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.354355677985417e-05 | 1.9143371794587633e-05 | 56.04% | 127.46% | 2.27x | ✅ |
| `hexbytes_repr[b'']` | 2.3348376174891066e-05 | 1.3468807695073144e-05 | 42.31% | 73.35% | 1.73x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.9374895681436286e-05 | 1.801269012478753e-05 | 54.25% | 118.60% | 2.19x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 2.971381216759327e-05 | 1.505609008977242e-05 | 49.33% | 97.35% | 1.97x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.460935976753077e-05 | 2.4708491739956383e-05 | 61.76% | 161.49% | 2.61x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007838469945919502 | 0.0002243457606356853 | 71.38% | 249.39% | 3.49x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.9215191124590317e-05 | 1.5161189984965393e-05 | 48.11% | 92.70% | 1.93x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 2.991823288633484e-05 | 1.540934893331987e-05 | 48.50% | 94.16% | 1.94x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.1691001129169436e-05 | 1.5804087190451883e-05 | 50.13% | 100.52% | 2.01x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.158361093197052e-05 | 1.6099566897969752e-05 | 49.03% | 96.18% | 1.96x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 2.9276450798842027e-05 | 1.4994550975499716e-05 | 48.78% | 95.25% | 1.95x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.203083819362033e-05 | 2.1110553976497683e-05 | 59.43% | 146.47% | 2.46x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00040996973279659006 | 0.00012264509279419757 | 70.08% | 234.27% | 3.34x | ✅ |
| `hexbytes_repr[b'abc']` | 2.898672207393172e-05 | 1.5176953119187251e-05 | 47.64% | 90.99% | 1.91x | ✅ |
| `hexbytes_repr[long alternating]` | 0.00040916847051631895 | 0.00012242146976505503 | 70.08% | 234.23% | 3.34x | ✅ |
| `hexbytes_repr[mixed pattern]` | 0.000101633870928413 | 3.530246800271416e-05 | 65.27% | 187.89% | 2.88x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.246728000483603e-05 | 1.6186893348489592e-05 | 50.14% | 100.58% | 2.01x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.0848644299883235e-05 | 1.545911416364489e-05 | 49.89% | 99.55% | 2.00x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.9940751942935487e-05 | 1.527425599895649e-05 | 48.99% | 96.02% | 1.96x | ✅ |
| `hexbytes_repr[palindrome]` | 3.52159739973852e-05 | 1.689138754863308e-05 | 52.03% | 108.48% | 2.08x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.465497521753407e-05 | 2.4576355284026577e-05 | 61.99% | 163.08% | 2.63x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.88717845019071e-05 | 1.5149513658180497e-05 | 47.53% | 90.58% | 1.91x | ✅ |
| `hexbytes_repr[single null byte]` | 2.8911940028206674e-05 | 1.4908189702599409e-05 | 48.44% | 93.93% | 1.94x | ✅ |
| `hexbytes_repr[two patterns]` | 5.201762743175475e-05 | 2.1093034987692894e-05 | 59.45% | 146.61% | 2.47x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.691638625330975e-05 | 1.6567791572034586e-05 | 2.06% | 2.10% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.4271356050182146e-05 | 4.19994800005166e-05 | 5.13% | 5.41% | 1.05x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.438588298922743e-05 | 4.191798051194854e-05 | 5.56% | 5.89% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.2137962452701102e-05 | 2.1857519679719912e-05 | 1.27% | 1.28% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.228222131171875e-05 | 2.1820427654383868e-05 | 2.07% | 2.12% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.04248216872827e-05 | 1.997430037339729e-05 | 2.21% | 2.26% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.1053168816843101e-05 | 1.2887070109266774e-05 | -16.59% | -14.23% | 0.86x | ❌ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.9005656290111305e-05 | 1.8894223797886533e-05 | 0.59% | 0.59% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.60656346122985e-05 | 1.5954763619952105e-05 | 0.69% | 0.69% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.604383003603757e-05 | 2.528878104235108e-05 | 2.90% | 2.99% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022770769702307653 | 0.00022497691203240947 | 1.20% | 1.21% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.6059975400769347e-05 | 1.590609392194957e-05 | 0.96% | 0.97% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.6287108230152334e-05 | 1.6222966178939844e-05 | 0.39% | 0.40% | 1.00x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.6762466040399034e-05 | 1.655020794774778e-05 | 1.27% | 1.28% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.6695905884580963e-05 | 1.6548415375941994e-05 | 0.88% | 0.89% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.6117019487555736e-05 | 1.6012066827998927e-05 | 0.65% | 0.66% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.219882682984261e-05 | 2.177242381389223e-05 | 1.92% | 1.96% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012572441441591984 | 0.00012256010583372334 | 2.52% | 2.58% | 1.03x | ✅ |
| `hexbytes_to_0x_hex[b'abc']` | 1.60103294963587e-05 | 1.6001931762005467e-05 | 0.05% | 0.05% | 1.00x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012592047671532302 | 0.00012330144913499276 | 2.08% | 2.12% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.7223854001472274e-05 | 3.593575694939888e-05 | 3.46% | 3.58% | 1.04x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.696379052583279e-05 | 1.6578995655497532e-05 | 2.27% | 2.32% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.6520635310286256e-05 | 1.66823433649861e-05 | -0.98% | -0.97% | 0.99x | ❌ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.628015397143251e-05 | 1.602097774957221e-05 | 1.59% | 1.62% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.7862755909017807e-05 | 1.7705493027812597e-05 | 0.88% | 0.89% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.610478944391157e-05 | 2.516687714479407e-05 | 3.59% | 3.73% | 1.04x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.5655208494807053e-05 | 1.5792981469290233e-05 | -0.88% | -0.87% | 0.99x | ❌ |
| `hexbytes_to_0x_hex[single null byte]` | 1.567546732618598e-05 | 1.5743899976856045e-05 | -0.44% | -0.43% | 1.00x | ❌ |
| `hexbytes_to_0x_hex[two patterns]` | 2.2139981464080752e-05 | 2.1765564203785477e-05 | 1.69% | 1.72% | 1.02x | ✅ |
