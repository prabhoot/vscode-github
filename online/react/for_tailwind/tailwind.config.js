/** @type {import('tailwindcss').Config} */
module.exports = {
  content: [
    "./src/**/*.{js,jsx,ts,tsx}",
  ],
  theme: {
    extend:{
      colors:{
        myColor:"#a62b2b"
      },
      container:{
        center:true,
      }
    },
  },
  plugins: [],
}