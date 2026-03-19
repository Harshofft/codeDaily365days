const {Connection , PublicKey ,Keypair ,LAMPORTS_PER_SOL}= require("@solana/web3.js")
const {getAssociatedTokenAddress} = require("@solana/spl-token");
const { log } = require("node:console");
const connection = new Connection("https://devnet.helius-rpc.com/?api-key=33f00b00-8489-4b93-867d-044b5a82dc38")
 async function getTokenBalance(publicKey, mintaddress) {
    const ataAddress = await getAssociatedTokenAddress(mintaddress, publicKey);
    const accountInfo = await connection.getAccountInfo(ataAddress);
    console.log(accountInfo);

 }

 getTokenBalance(new PublicKey("EdmD34fs6wSYNspHNxiB3NRhy4ms3Qmsfibq1mfknMHu"), new PublicKey("supqwJ5MK236oZSYSGzDtqSzYamWcDPCMDfDVgCYGju"))