

#include <QtGlobal>

// Automatically generated by extract_strings_qt.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *dash_strings[] = {
QT_TRANSLATE_NOOP("dash-core", "Kanchan Core"),
QT_TRANSLATE_NOOP("dash-core", "The %s developers"),
QT_TRANSLATE_NOOP("dash-core", ""
"%s file contains all private keys from this wallet. Do not share it with "
"anyone!"),
QT_TRANSLATE_NOOP("dash-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("dash-core", ""
"-masternode option is deprecated and ignored, specifying -"
"masternodeblsprivkey is enough to start this node as a masternode."),
QT_TRANSLATE_NOOP("dash-core", ""
"-maxtxfee is set very high! Fees this large could be paid on a single "
"transaction."),
QT_TRANSLATE_NOOP("dash-core", ""
"A fee rate (in %s/kB) that will be used when fee estimation has insufficient "
"data (default: %s)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Accept relayed transactions received from whitelisted peers even when not "
"relaying transactions (default: %d)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Add a node to connect to and attempt to keep the connection open (see the "
"`addnode` RPC command help for more info)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("dash-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("dash-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("dash-core", ""
"Bind to given address to listen for JSON-RPC connections. This option is "
"ignored unless -rpcallowip is also passed. Port is optional and overrides -"
"rpcport. Use [host]:port notation for IPv6. This option can be specified "
"multiple times (default: 127.0.0.1 and ::1 i.e., localhost, or if -"
"rpcallowip has been specified, 0.0.0.0 and :: i.e., all addresses)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Cannot obtain a lock on data directory %s. %s is probably already running."),
QT_TRANSLATE_NOOP("dash-core", ""
"Connect only to the specified node(s); -connect=0 disables automatic "
"connections (the rules for this peer are the same as for -addnode)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("dash-core", ""
"Disable all Dash specific functionality (Masternodes, PrivateSend, "
"InstantSend, Governance) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Discover own IP addresses (default: 1 when listening and no -externalip or -"
"proxy)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Distributed under the MIT software license, see the accompanying file %s or "
"%s"),
QT_TRANSLATE_NOOP("dash-core", ""
"Do not keep transactions in the mempool longer than <n> hours (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Enable multiple PrivateSend mixing sessions per block, experimental (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Enable publish raw transactions of attempted InstantSend double spend in "
"<address>"),
QT_TRANSLATE_NOOP("dash-core", ""
"Enable publish transaction hashes of attempted InstantSend double spend in "
"<address>"),
QT_TRANSLATE_NOOP("dash-core", ""
"Enable use of PrivateSend for funds stored in this wallet (0-1, default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Error loading %s: You can't enable HD on an already existing non-HD wallet"),
QT_TRANSLATE_NOOP("dash-core", ""
"Error loading wallet %s. -wallet parameter must only specify a filename (not "
"a path)."),
QT_TRANSLATE_NOOP("dash-core", ""
"Error reading %s! All keys read correctly, but transaction data or address "
"book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("dash-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Exclude debugging information for a category. Can be used in conjunction "
"with -debug=1 to output debug logs for all categories except one or more "
"specified categories."),
QT_TRANSLATE_NOOP("dash-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Execute command when a wallet InstantSend transaction is successfully locked "
"(%s in cmd is replaced by TxID)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Extra transactions to keep in memory for compact block reconstructions "
"(default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Failed to create backup, file already exists! This could happen if you "
"restarted wallet in less than 60 seconds. You can continue if you are ok "
"with this."),
QT_TRANSLATE_NOOP("dash-core", ""
"Fees (in %s/kB) smaller than this are considered zero fee for relaying, "
"mining and transaction creation (default: %s)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Fees (in %s/kB) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Force relay of transactions from whitelisted peers even if they violate "
"local relay policy (default: %d)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("dash-core", ""
"How thorough the block verification of -checkblocks is (0-4, default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"If <category> is not supplied or if <category> = 1, output all debugging "
"information."),
QT_TRANSLATE_NOOP("dash-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"If this block is in the chain assume that it and its ancestors are valid and "
"potentially skip their script verification (0 to verify all, default: %s, "
"testnet: %s)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Incorrect or no devnet genesis block found. Wrong datadir for devnet "
"specified?"),
QT_TRANSLATE_NOOP("dash-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Maintain a full address index, used to query for the balance, txids and "
"unspent outputs for addresses (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Maintain a full spent index, used to query the spending txid and input index "
"for an outpoint (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Maintain a timestamp index for block hashes, used to query blocks hashes by "
"a range of timestamps (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Maintain at most <n> connections to peers (temporary service connections "
"excluded) (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Make sure to encrypt your wallet and delete all non-encrypted backups after "
"you have verified that the wallet works!"),
QT_TRANSLATE_NOOP("dash-core", ""
"Maximum allowed median peer time offset adjustment. Local perspective of "
"time may be influenced by peers forward or backward by this amount. "
"(default: %u seconds)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Maximum total fees (in %s) to use in a single wallet transaction or raw "
"transaction; setting this too low may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Maximum total size of all orphan transactions in megabytes (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Name to construct url for KeePass entry that stores the wallet passphrase"),
QT_TRANSLATE_NOOP("dash-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Override spork address. Only useful for regtest and devnet. Using this on "
"mainnet or testnet will ban you."),
QT_TRANSLATE_NOOP("dash-core", ""
"Overrides minimum spork signers to change spork value. Only useful for "
"regtest and devnet. Using this on mainnet or testnet will ban you."),
QT_TRANSLATE_NOOP("dash-core", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong, %s will not work properly."),
QT_TRANSLATE_NOOP("dash-core", ""
"Please contribute if you find %s useful. Visit %s for further information "
"about the software."),
QT_TRANSLATE_NOOP("dash-core", ""
"PrivateSend uses exact denominated amounts to send funds, you might simply "
"need to mix some more coins."),
QT_TRANSLATE_NOOP("dash-core", ""
"Prune configured below the minimum of %d MiB.  Please use a higher number."),
QT_TRANSLATE_NOOP("dash-core", ""
"Prune: last wallet synchronisation goes beyond pruned data. You need to -"
"reindex (download the whole blockchain again in case of pruned node)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect used)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Reduce storage requirements by enabling pruning (deleting) of old blocks. "
"This allows the pruneblockchain RPC to be called to delete specific blocks, "
"and enables automatic pruning of old blocks if a target size in MiB is "
"provided. This mode is incompatible with -txindex and -rescan. Warning: "
"Reverting this setting requires re-downloading the entire blockchain. "
"(default: 0 = disable pruning blocks, 1 = allow manual pruning via RPC, >%u "
"= automatically prune block files to stay under the specified target size in "
"MiB)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Rescans are not possible in pruned mode. You will need to use -reindex which "
"will download the whole blockchain again."),
QT_TRANSLATE_NOOP("dash-core", ""
"Set lowest fee rate (in %s/kB) for transactions to be included in block "
"creation. (default: %s)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Set the masternode BLS private key and enable the client to act as a "
"masternode"),
QT_TRANSLATE_NOOP("dash-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Specify full path to directory for automatic wallet backups (must exist)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("dash-core", ""
"The fee rate (in %s/kB) that indicates your tolerance for discarding change "
"by adding it to the fee (default: %s). Note: An output is discarded if it is "
"dust at this rate, but we will always discard up to the dust relay fee and a "
"discard fee above that is limited by the fee estimate for the longest target"),
QT_TRANSLATE_NOOP("dash-core", ""
"The transaction amount is too small to send after the fee has been deducted"),
QT_TRANSLATE_NOOP("dash-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("dash-core", ""
"This is the transaction fee you may discard if change is smaller than dust "
"at this level"),
QT_TRANSLATE_NOOP("dash-core", ""
"This is the transaction fee you may pay when fee estimates are not available."),
QT_TRANSLATE_NOOP("dash-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit %s and cryptographic software written by Eric Young and "
"UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("dash-core", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of uacomments."),
QT_TRANSLATE_NOOP("dash-core", ""
"Transaction index can't be disabled in full mode. Either start with -"
"litemode command line switch or enable transaction index."),
QT_TRANSLATE_NOOP("dash-core", ""
"Tries to keep outbound traffic under the given target (in MiB per 24h), 0 = "
"no limit (default: %d)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Unable to locate enough PrivateSend denominated funds for this transaction."),
QT_TRANSLATE_NOOP("dash-core", ""
"Unable to locate enough PrivateSend non-denominated funds for this "
"transaction."),
QT_TRANSLATE_NOOP("dash-core", ""
"Unable to replay blocks. You will need to rebuild the database using -"
"reindex-chainstate."),
QT_TRANSLATE_NOOP("dash-core", ""
"Unsupported argument -socks found. Setting SOCKS version isn't possible "
"anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("dash-core", ""
"Unsupported argument -whitelistalwaysrelay ignored, use -whitelistrelay and/"
"or -whitelistforcerelay."),
QT_TRANSLATE_NOOP("dash-core", ""
"Use N separate masternodes for each denominated input to mix funds (%u-%u, "
"default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Use N separate masternodes in parallel to mix funds (%u-%u, default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Use UPnP to map the listening port (default: 1 when listening and no -proxy)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Use hierarchical deterministic key generation (HD) after BIP39/BIP44. Only "
"has effect during wallet creation/first start"),
QT_TRANSLATE_NOOP("dash-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("dash-core", ""
"User defined mnemonic for HD wallet (bip39). Only has effect during wallet "
"creation/first start (default: randomly generated)"),
QT_TRANSLATE_NOOP("dash-core", ""
"User defined mnemonic passphrase for HD wallet (BIP39). Only has effect "
"during wallet creation/first start (default: empty string)"),
QT_TRANSLATE_NOOP("dash-core", ""
"User defined seed for HD wallet (should be in hex). Only has effect during "
"wallet creation/first start (default: randomly generated)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Username and hashed password for JSON-RPC connections. The field <userpw> "
"comes in the format: <USERNAME>:<SALT>$<HASH>. A canonical python script is "
"included in share/rpcuser. The client then connects normally using the "
"rpcuser=<USERNAME>/rpcpassword=<PASSWORD> pair of arguments. This option can "
"be specified multiple times"),
QT_TRANSLATE_NOOP("dash-core", ""
"WARNING! Failed to replenish keypool, please unlock your wallet to do so."),
QT_TRANSLATE_NOOP("dash-core", ""
"Wallet is locked, can't replenish keypool! Automatic backups and mixing are "
"disabled, please unlock your wallet to replenish keypool."),
QT_TRANSLATE_NOOP("dash-core", ""
"Wallet will not create transactions that violate mempool chain limits "
"(default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("dash-core", ""
"Warning: Unknown block versions being mined! It's possible unknown rules are "
"in effect"),
QT_TRANSLATE_NOOP("dash-core", ""
"Warning: Wallet file corrupt, data salvaged! Original %s saved as %s in %s; "
"if your balance or transactions are incorrect you should restore from a "
"backup."),
QT_TRANSLATE_NOOP("dash-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("dash-core", ""
"Whether to save the mempool on shutdown and load on restart (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", ""
"Whitelist peers connecting from the given IP address (e.g. 1.2.3.4) or CIDR "
"notated network (e.g. 1.2.3.0/24). Can be specified multiple times."),
QT_TRANSLATE_NOOP("dash-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("dash-core", ""
"You are starting in lite mode, most Dash-specific functionality is disabled."),
QT_TRANSLATE_NOOP("dash-core", ""
"You need to rebuild the database using -reindex to change -timestampindex"),
QT_TRANSLATE_NOOP("dash-core", ""
"You need to rebuild the database using -reindex to go back to unpruned "
"mode.  This will redownload the entire blockchain"),
QT_TRANSLATE_NOOP("dash-core", "%d of last 100 blocks have unexpected version"),
QT_TRANSLATE_NOOP("dash-core", "%s corrupt, salvage failed"),
QT_TRANSLATE_NOOP("dash-core", "%s is not a valid backup folder!"),
QT_TRANSLATE_NOOP("dash-core", "%s is set very high!"),
QT_TRANSLATE_NOOP("dash-core", "(default: %s)"),
QT_TRANSLATE_NOOP("dash-core", "(default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "(press q to shutdown and continue later)"),
QT_TRANSLATE_NOOP("dash-core", "-devnet can only be specified once"),
QT_TRANSLATE_NOOP("dash-core", "-maxmempool must be at least %d MB"),
QT_TRANSLATE_NOOP("dash-core", "-port must be specified when -devnet and -listen are specified"),
QT_TRANSLATE_NOOP("dash-core", "-rpcport must be specified when -devnet and -server are specified"),
QT_TRANSLATE_NOOP("dash-core", "<category> can be:"),
QT_TRANSLATE_NOOP("dash-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("dash-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("dash-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("dash-core", "Allow RFC1918 addresses to be relayed and connected to (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Already have that input."),
QT_TRANSLATE_NOOP("dash-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Append comment to the user agent string"),
QT_TRANSLATE_NOOP("dash-core", "Attempt to recover private keys from a corrupt wallet on startup"),
QT_TRANSLATE_NOOP("dash-core", "Automatic backups disabled"),
QT_TRANSLATE_NOOP("dash-core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("dash-core", "Block creation options:"),
QT_TRANSLATE_NOOP("dash-core", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("dash-core", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("dash-core", "Can't mix: no compatible inputs found!"),
QT_TRANSLATE_NOOP("dash-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("dash-core", "Cannot resolve -%s address: '%s'"),
QT_TRANSLATE_NOOP("dash-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("dash-core", "Chain selection options:"),
QT_TRANSLATE_NOOP("dash-core", "Change index out of range"),
QT_TRANSLATE_NOOP("dash-core", "Collateral not valid."),
QT_TRANSLATE_NOOP("dash-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("dash-core", "Connect to KeePassHttp on port <port> (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("dash-core", "Connection options:"),
QT_TRANSLATE_NOOP("dash-core", "Copyright (C)"),
QT_TRANSLATE_NOOP("dash-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("dash-core", "Create up to N inputs of each denominated amount (%u-%u, default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("dash-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("dash-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("dash-core", "Done loading"),
QT_TRANSLATE_NOOP("dash-core", "ERROR! Failed to create automatic backup"),
QT_TRANSLATE_NOOP("dash-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("dash-core", "Enable publish hash of governance objects (like proposals) in <address>"),
QT_TRANSLATE_NOOP("dash-core", "Enable publish hash of governance votes in <address>"),
QT_TRANSLATE_NOOP("dash-core", "Enable publish hash transaction (locked via InstantSend) in <address>"),
QT_TRANSLATE_NOOP("dash-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("dash-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("dash-core", "Enable publish raw transaction (locked via InstantSend) in <address>"),
QT_TRANSLATE_NOOP("dash-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("dash-core", "Entries are full."),
QT_TRANSLATE_NOOP("dash-core", "Entry exceeds maximum size."),
QT_TRANSLATE_NOOP("dash-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("dash-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("dash-core", "Error loading %s"),
QT_TRANSLATE_NOOP("dash-core", "Error loading %s: Wallet corrupted"),
QT_TRANSLATE_NOOP("dash-core", "Error loading %s: Wallet requires newer version of %s"),
QT_TRANSLATE_NOOP("dash-core", "Error loading %s: You can't disable HD on an already existing HD wallet"),
QT_TRANSLATE_NOOP("dash-core", "Error loading block database"),
QT_TRANSLATE_NOOP("dash-core", "Error loading wallet %s. -wallet filename must be a regular file."),
QT_TRANSLATE_NOOP("dash-core", "Error loading wallet %s. Duplicate -wallet filename specified."),
QT_TRANSLATE_NOOP("dash-core", "Error loading wallet %s. Invalid characters in -wallet filename."),
QT_TRANSLATE_NOOP("dash-core", "Error opening block database"),
QT_TRANSLATE_NOOP("dash-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("dash-core", "Error upgrading chainstate database"),
QT_TRANSLATE_NOOP("dash-core", "Error"),
QT_TRANSLATE_NOOP("dash-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("dash-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("dash-core", "Failed to create backup %s!"),
QT_TRANSLATE_NOOP("dash-core", "Failed to create backup, error: %s"),
QT_TRANSLATE_NOOP("dash-core", "Failed to delete backup, error: %s"),
QT_TRANSLATE_NOOP("dash-core", "Failed to find mixing queue to join"),
QT_TRANSLATE_NOOP("dash-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("dash-core", "Failed to load fulfilled requests cache from"),
QT_TRANSLATE_NOOP("dash-core", "Failed to load governance cache from"),
QT_TRANSLATE_NOOP("dash-core", "Failed to load masternode cache from"),
QT_TRANSLATE_NOOP("dash-core", "Failed to load sporks cache from"),
QT_TRANSLATE_NOOP("dash-core", "Failed to start a new mixing queue"),
QT_TRANSLATE_NOOP("dash-core", "Fee (in %s/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("dash-core", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("dash-core", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("dash-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("dash-core", "Importing..."),
QT_TRANSLATE_NOOP("dash-core", "Imports blocks from external blk000??.dat file on startup"),
QT_TRANSLATE_NOOP("dash-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Incompatible mode."),
QT_TRANSLATE_NOOP("dash-core", "Incompatible version."),
QT_TRANSLATE_NOOP("dash-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("dash-core", "Information"),
QT_TRANSLATE_NOOP("dash-core", "Initialization sanity check failed. %s is shutting down."),
QT_TRANSLATE_NOOP("dash-core", "Input is not valid."),
QT_TRANSLATE_NOOP("dash-core", "Inputs vs outputs size mismatch."),
QT_TRANSLATE_NOOP("dash-core", "InstantSend options:"),
QT_TRANSLATE_NOOP("dash-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("dash-core", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("dash-core", "Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("dash-core", "Invalid amount for -%s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("dash-core", "Invalid amount for -discardfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("dash-core", "Invalid amount for -fallbackfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("dash-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("dash-core", "Invalid masternodeblsprivkey. Please see documentation."),
QT_TRANSLATE_NOOP("dash-core", "Invalid minimum number of spork signers specified with -minsporkkeys"),
QT_TRANSLATE_NOOP("dash-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("dash-core", "Invalid script detected."),
QT_TRANSLATE_NOOP("dash-core", "Invalid spork address specified with -sporkaddr"),
QT_TRANSLATE_NOOP("dash-core", "KeePassHttp id for the established association"),
QT_TRANSLATE_NOOP("dash-core", "KeePassHttp key for AES encrypted communication with KeePass"),
QT_TRANSLATE_NOOP("dash-core", "Keep N DASH mixed (%u-%u, default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Keep the transaction memory pool below <n> megabytes (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Keypool ran out, please call keypoolrefill first"),
QT_TRANSLATE_NOOP("dash-core", "Last PrivateSend was too recent."),
QT_TRANSLATE_NOOP("dash-core", "Last successful PrivateSend action was too recent."),
QT_TRANSLATE_NOOP("dash-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Loading P2P addresses..."),
QT_TRANSLATE_NOOP("dash-core", "Loading banlist..."),
QT_TRANSLATE_NOOP("dash-core", "Loading block index..."),
QT_TRANSLATE_NOOP("dash-core", "Loading fulfilled requests cache..."),
QT_TRANSLATE_NOOP("dash-core", "Loading governance cache..."),
QT_TRANSLATE_NOOP("dash-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("dash-core", "Loading sporks cache..."),
QT_TRANSLATE_NOOP("dash-core", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("dash-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("dash-core", "Location of the auth cookie (default: data dir)"),
QT_TRANSLATE_NOOP("dash-core", "Lock is already in place."),
QT_TRANSLATE_NOOP("dash-core", "Make the wallet broadcast transactions"),
QT_TRANSLATE_NOOP("dash-core", "Masternode options:"),
QT_TRANSLATE_NOOP("dash-core", "Masternode queue is full."),
QT_TRANSLATE_NOOP("dash-core", "Masternode:"),
QT_TRANSLATE_NOOP("dash-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Minimum bytes per sigop in transactions we relay and mine (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Missing input transaction information."),
QT_TRANSLATE_NOOP("dash-core", "Mixing in progress..."),
QT_TRANSLATE_NOOP("dash-core", "Mnemonic passphrase is too long, must be at most 256 characters"),
QT_TRANSLATE_NOOP("dash-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("dash-core", "No Masternodes detected."),
QT_TRANSLATE_NOOP("dash-core", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("dash-core", "No errors detected."),
QT_TRANSLATE_NOOP("dash-core", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("dash-core", "Node relay options:"),
QT_TRANSLATE_NOOP("dash-core", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("dash-core", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("dash-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("dash-core", "Not enough funds to mix."),
QT_TRANSLATE_NOOP("dash-core", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("dash-core", "Number of automatic wallet backups (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("dash-core", "Options:"),
QT_TRANSLATE_NOOP("dash-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("dash-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Print this help message and exit"),
QT_TRANSLATE_NOOP("dash-core", "Print version and exit"),
QT_TRANSLATE_NOOP("dash-core", "PrivateSend is idle."),
QT_TRANSLATE_NOOP("dash-core", "PrivateSend options:"),
QT_TRANSLATE_NOOP("dash-core", "PrivateSend request complete:"),
QT_TRANSLATE_NOOP("dash-core", "PrivateSend request incomplete:"),
QT_TRANSLATE_NOOP("dash-core", "Prune cannot be configured with a negative value."),
QT_TRANSLATE_NOOP("dash-core", "Prune mode is incompatible with -txindex."),
QT_TRANSLATE_NOOP("dash-core", "Pruning blockstore..."),
QT_TRANSLATE_NOOP("dash-core", "RPC server options:"),
QT_TRANSLATE_NOOP("dash-core", "Rebuild chain state and block index from the blk*.dat files on disk"),
QT_TRANSLATE_NOOP("dash-core", "Rebuild chain state from the currently indexed blocks"),
QT_TRANSLATE_NOOP("dash-core", "Reducing -maxconnections from %d to %d, because of system limitations."),
QT_TRANSLATE_NOOP("dash-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Replaying blocks..."),
QT_TRANSLATE_NOOP("dash-core", "Rescan the block chain for missing wallet transactions on startup"),
QT_TRANSLATE_NOOP("dash-core", "Rescanning..."),
QT_TRANSLATE_NOOP("dash-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("dash-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("dash-core", "Send trace/debug info to debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Session not complete!"),
QT_TRANSLATE_NOOP("dash-core", "Session timed out."),
QT_TRANSLATE_NOOP("dash-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("dash-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("dash-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("dash-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("dash-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("dash-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("dash-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("dash-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("dash-core", "Specify data directory"),
QT_TRANSLATE_NOOP("dash-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("dash-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("dash-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("dash-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Start PrivateSend automatically (0-1, default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Starting network threads..."),
QT_TRANSLATE_NOOP("dash-core", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("dash-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("dash-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("dash-core", "Synchronization pending..."),
QT_TRANSLATE_NOOP("dash-core", "Synchronizing blockchain..."),
QT_TRANSLATE_NOOP("dash-core", "Synchronizing governance objects..."),
QT_TRANSLATE_NOOP("dash-core", "The source code is available from %s."),
QT_TRANSLATE_NOOP("dash-core", "The transaction amount is too small to pay the fee"),
QT_TRANSLATE_NOOP("dash-core", "The wallet will avoid paying less than the minimum relay fee."),
QT_TRANSLATE_NOOP("dash-core", "This is experimental software."),
QT_TRANSLATE_NOOP("dash-core", "This is the minimum transaction fee you pay on every transaction."),
QT_TRANSLATE_NOOP("dash-core", "This is the transaction fee you will pay if you send a transaction."),
QT_TRANSLATE_NOOP("dash-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Too many %f denominations, removing."),
QT_TRANSLATE_NOOP("dash-core", "Too many %f denominations, skipping."),
QT_TRANSLATE_NOOP("dash-core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("dash-core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("dash-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("dash-core", "Transaction amounts must not be negative"),
QT_TRANSLATE_NOOP("dash-core", "Transaction created successfully."),
QT_TRANSLATE_NOOP("dash-core", "Transaction fee and change calculation failed"),
QT_TRANSLATE_NOOP("dash-core", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("dash-core", "Transaction has too long of a mempool chain"),
QT_TRANSLATE_NOOP("dash-core", "Transaction must have at least one recipient"),
QT_TRANSLATE_NOOP("dash-core", "Transaction not valid."),
QT_TRANSLATE_NOOP("dash-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("dash-core", "Transaction too large"),
QT_TRANSLATE_NOOP("dash-core", "Trying to connect..."),
QT_TRANSLATE_NOOP("dash-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("dash-core", "Unable to bind to %s on this computer. %s is probably already running."),
QT_TRANSLATE_NOOP("dash-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("dash-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("dash-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("dash-core", "Unknown response."),
QT_TRANSLATE_NOOP("dash-core", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("dash-core", "Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("dash-core", "Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("dash-core", "Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("dash-core", "Unsupported logging category %s=%s."),
QT_TRANSLATE_NOOP("dash-core", "Upgrade wallet to latest format on startup"),
QT_TRANSLATE_NOOP("dash-core", "Upgrading UTXO database"),
QT_TRANSLATE_NOOP("dash-core", "Use KeePass 2 integration using KeePassHttp plugin (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Use devnet chain with provided name"),
QT_TRANSLATE_NOOP("dash-core", "Use the test chain"),
QT_TRANSLATE_NOOP("dash-core", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("dash-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("dash-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("dash-core", "Verifying wallet(s)..."),
QT_TRANSLATE_NOOP("dash-core", "Very low number of keys left: %d"),
QT_TRANSLATE_NOOP("dash-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("dash-core", "Wallet debugging/testing options:"),
QT_TRANSLATE_NOOP("dash-core", "Wallet is locked."),
QT_TRANSLATE_NOOP("dash-core", "Wallet needed to be rewritten: restart %s to complete"),
QT_TRANSLATE_NOOP("dash-core", "Wallet options:"),
QT_TRANSLATE_NOOP("dash-core", "Wallet window title"),
QT_TRANSLATE_NOOP("dash-core", "Warning"),
QT_TRANSLATE_NOOP("dash-core", "Warning: unknown new rules activated (versionbit %i)"),
QT_TRANSLATE_NOOP("dash-core", "Wasn't able to create wallet backup folder %s!"),
QT_TRANSLATE_NOOP("dash-core", "Whether to operate in a blocks only mode (default: %u)"),
QT_TRANSLATE_NOOP("dash-core", "Will retry..."),
QT_TRANSLATE_NOOP("dash-core", "You can not start a masternode in lite mode."),
QT_TRANSLATE_NOOP("dash-core", "You can not start a masternode with wallet enabled."),
QT_TRANSLATE_NOOP("dash-core", "You need to rebuild the database using -reindex to change -addressindex"),
QT_TRANSLATE_NOOP("dash-core", "You need to rebuild the database using -reindex to change -spentindex"),
QT_TRANSLATE_NOOP("dash-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("dash-core", "Your entries added successfully."),
QT_TRANSLATE_NOOP("dash-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("dash-core", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("dash-core", "no mixing available."),
QT_TRANSLATE_NOOP("dash-core", "see debug.log for details."),
};
