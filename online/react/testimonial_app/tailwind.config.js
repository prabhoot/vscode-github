/** @type {import('tailwindcss').Config} */
module.exports = {
  content: [
    "./src/**/*.{js,jsx,ts,tsx}",
    "./src/components/*.{js,jsx,ts,tsx}"
  ],
  theme: {
    extend:{
      container:{
        center:true,
      },
      screens:{
        'my-custom':'1108'
      }
    },
  },
  plugins: [],
}